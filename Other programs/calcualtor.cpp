#include<iostream>
using namespace std;
int main () {
    char operato;
    int a,total;
    cout<<"Enter num = ";
    cin>>total;
    do{
        cout<<"Enter operator = ";
        cin>>operato;
        cout<<"Enter num = ";
        cin>>a;
        switch(operato){
            case '+':
            total+=a;
            cout<<"Total = "<<total<<endl;
            break;
            case '-':
            total-=a;
            cout<<"Total = "<<total<<endl;
            break;
            case '*':
            total*=a;
            cout<<"Total = "<<total<<endl;
            break;
            default:
            cout<<"Not a valid operator for this program";
        }    
    }while(operato != '=');
    return 0;
}