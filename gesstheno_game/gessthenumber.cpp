#include<iostream>
#include<string>
#include<random>
#include<conio.h>
using namespace std; 

int main () {
    string name;
    cout<<"\nEnter your name = ";
    cin>>name;
    cout<<"\n\nHy "<<name<<" ,you are playing a simple number guessing game"<<endl;
    cout<<"\n----Instructions----\n You first have to enter starting and ending no. form wich you want to guess the no. e.g.(first no. = 10,second no.=20). Then you have to enter how many attempts you want to sucessfully guessing the no. Now let's start the game\n";
    cout<<"\nPress any key to start the game\n\n";
    getch();
    char y_or_n;
    do{
    int st,ed,attempt;
    cout<<"\nEnter starting no. = ";
    cin>>st;
    cout<<"\nEnter endind no. = ";
    cin>>ed;
    cout<<"\n How many attempt you want to take for sucessfully guessing the no. = ";
    cin>>attempt;
    random_device rd;
    uniform_int_distribution<int> dist(st,ed);
  //  cout<<"\n"<<dist(rd);
    int rndn = dist(rd);
    int input,count=0;
    for(int i=0; i<attempt; i++){
            cout<<"\n"<<"Attempt "<<i+1<<" :Guess the no. = ";
            cin>>input;
            if(input==rndn){
                cout<<"\nCongrats! "<<name<<" You sucessfully guessed the no. ";
                count++;
                break;
            }
            else{
                cout<<"Naa\n";
            }
    }
    if(count==0){
        cout<<"\n\nNice try! But you sucessfully LOOSED the game;) The no. is "<<rndn;
        cout<<"\n\nBetter luck next time:)";
    }
    cout<<"\n\nWant to play more?(y/n)";
    cin>>y_or_n;
}while(y_or_n=='y');
    return 0;
}