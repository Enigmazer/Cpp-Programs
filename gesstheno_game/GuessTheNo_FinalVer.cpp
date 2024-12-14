#include<iostream>
#include<string>                //this one header file is for taking string inputs e.g.- name
#include<random>                //header file used for random no. genration
#include<chrono>                //this one is also used in genrating random no.
using namespace std; 

class Game{
    public:
    string name;
    char instructions;
    int st,ed,attempts,rndn,diffr,difficulty;
    char y_or_n;
    int chdifft(){                      //this functions is for asking and validating difficulty level
        do {
            cin>>difficulty;
            if (difficulty < 1 && difficulty > 5) {
                cout << "Choose a valid difficulty level\nENTER CHOISE = ";
            }
        }while(difficulty < 1 && difficulty > 5);
        return difficulty;
    }
    int st_no(){                            //this function ask starting no.
        cout<<"\nEnter starting no. = ";
        cin>>st;
        return st;
    }
    int ed_no(){                            //this ask ending no.
        cout<<"Enter endind no. = ";
        cin>>ed;
        while(ed<st) {
            cout<<"\nerror: The ending no. can't be bigeer than the starting number."<<endl;
            ed_no();
        }
        return ed;
    }
    int randngen(int st,int ed){                    //this function genrates a random number as per user inputs
        mt19937 gen(chrono::system_clock::now().time_since_epoch().count());
        uniform_int_distribution<int> dist(st,ed);
        return dist(gen);
    }
    int fattempts(){                                //this function is for asking attempts to user
        int attempts;
        cout<<"\nHow many attempt you want to take for sucessfully guessing the no. = ";
        cin>>attempts;
        return attempts;
    }
    int attempte(int st,int ed,float per){          //this fuction is for validating attempts as per diffrent difficulty levels
        diffr=ed-st;
        diffr=diffr*per;
        cout<<"MAX attempts = "<<diffr;
        attempts=fattempts();
        while(diffr<1){
            diffr=1;
        }
        while(attempts>diffr){
            cout<<"error: MAX attempts = "<<diffr;
            attempts=fattempts();
        }
        return attempts;
    }
    void hint(int input){               //this function is for hints 
        if(rndn>input){
            cout<<"HINT: The no. is bigger than "<<input<<"\n";
        }
        else {
            cout<<"HINT: The no. is smaller than "<<input<<"\n";
        }
    }
    void game(int rndn,int attempts,string name,int difft){         //this function is for actual game
        int input,count=0;
        for(int i=1; i<=attempts; i++){     //this loop is for taking input for guessed number
            cout<<"\nAttempt "<<i<<" :Guess the no. = ";
            cin>>input;
        
        if (input==rndn) {          //this run when you guess the no. right
            cout<<"\nCongrats! "<<name<<" You sucessfully guessed the no. ";
            count++;
            break;
        }
        else{                       //This else statment run when your guess is wrong
            cout<<"Naa\n";
            switch (difft){
                case 1:             // Very Easy difficulty
                    if(attempts==i){
                        //cout<<" ";
                    }
                    else{
                        hint(input);
                        char cheat;
                        cout<<"Want to reaveling The no.?(y/n)";   
                        cin>>cheat;
                        switch (cheat) {
                        case 'y': cout<<"\nThe no. is "<<rndn;
                        break;
                        default :
                        break;
                        } 
                    }
                break;
                case 2:            // Easy difficulty
                    if(i==attempts-3 || i==attempts-2 || i==attempts-1) {
                        hint(input);
                    }
                break;
                case 3:            // Normal difficulty
                    if(i==attempts-2 || i==attempts-1) {
                        hint(input);
                    }
                break;
                case 4:             // Hard difficulty
                    if(i==attempts-1) {
                        hint(input);
                    }
                break;              
                default:            // Pro difficulty
                break;
           }
        } 
    }
        if(count==0){               //this if statement run when you loose the game
            cout<<"\n\nNice try! But you sucessfully LOOSED the game ;) The no. was "<<rndn;
            cout<<"\nBetter luck next time:)";
        } 
    } 
};
                //--------------starting main function from here--------------
int main () {
    Game Go1;               //created an object for class Game
    cout<<"\nEnter your name Without Space = ";
    cin>>Go1.name;                          //for entering name
    cout<<"Hy "<<Go1.name<<" ,you are playing a simple number guessing game"<<endl;
    cout<<"\nEnter i for instructions or any other key to start the game.\n\n";
    cin>>Go1.instructions;
    if(Go1.instructions=='i'){
    cout<<"\n----Instructions----\nYou first have to enter starting and ending no. from wich you want to guess the no. e.g.(first no. = 10,second no.=20). Then you have to enter how many attempts you want for sucessfully guessing the no.\n";
    cout<<"\nVery Easy - Have unlimited attempts and can reavele the number.\nEasey - Have 80"<<"%"<<" of the diffrence attempts e.g.(10-20, 8 attempts) And 3 hints at last.\nNormal - Have 60"<<"%"<<" of the diffrence attempts e.g.(10-20, 6 attempts) And 2 hints at last.\nHard - Have 30"<<"%"<<" of the diffrence attempts e.g.(10-20, 3 attempts) And 1 hint at last.\nPro - Have Only 1 attempt.\n--------- Now let's start the game......\n"; 
    }
    do{
    cout<<"\n----------Choose difficulty level----------";
    cout<<"\n1.Very Easy\n2.Easy\n3.Normal\n4.Hard\n5.Pro\nENTER CHOISE = ";
    Go1.difficulty=Go1.chdifft();          //Choose difficulty level
    do{
    Go1.st=Go1.st_no();                    // choose starting no.
    Go1.ed=Go1.ed_no();                    //choose ending no.
    do{
    Go1.rndn=Go1.randngen(Go1.st,Go1.ed);
    
    switch (Go1.difficulty) {
        case 1:                     // Very Easy difficulty
            cout<<"MAX attempts = Unlimited";
            Go1.attempts=Go1.fattempts();
            Go1.game(Go1.rndn,Go1.attempts,Go1.name,Go1.difficulty);
        break;
        case 2:                     // Easy difficulty
            Go1.attempts=Go1.attempte(Go1.st,Go1.ed,0.8);
            Go1.game(Go1.rndn,Go1.attempts,Go1.name,Go1.difficulty);
        break;
        case 3:                     // Normal difficulty
            Go1.attempts=Go1.attempte(Go1.st,Go1.ed,0.6);
            Go1.game(Go1.rndn,Go1.attempts,Go1.name,Go1.difficulty);
        break;
        case 4:                     // Hard difficulty
            Go1.attempts=Go1.attempte(Go1.st,Go1.ed,0.3);
            Go1.game(Go1.rndn,Go1.attempts,Go1.name,Go1.difficulty);
        break;
        case 5:                     // Pro difficulty
            Go1.attempts=1;
            cout<<"You have only one attempt";
            Go1.game(Go1.rndn,Go1.attempts,Go1.name,Go1.difficulty);
        break;
    }
        cout<<"\n\nEnter   r for replaying \n\tn for changing starting and ending no. \n\td for changing the difficulty level.\n\tc for cancel\n\t(r/n/d/c) = ";
        cin>>Go1.y_or_n;
    }while(Go1.y_or_n=='r');                //change rand number 
    }while(Go1.y_or_n=='n');                //change ed ,st number
    }while(Go1.y_or_n=='d');                //chnage difficulty level
    
    return 0;
}                    //-----------END of Program-----------