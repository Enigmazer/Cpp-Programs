#include<iostream> 
using namespace std;

int main () {
    int i,j,rows;

    cout<<"Enter rows";
    cin>>rows;

    /*for (i=1; i<=rows; i++) {
        for (j=i; j<=rows; j++) { 
        cout<<"*"; }
        cout<<"\n";
    }*/     // upside down right angle triangle


   /* for (i=1; i<=rows; i++) {
        for (j=rows; j>=1; j--) {
            if (i<j) {
                cout<<" ";
            } else {
                cout<<"*";
            }
        }
        cout<<"\n";     
    } */          //for right angle tringle


   /* for (i=1; i<=rows; i++) {
        for (j=1; j<=i; j++) {
            cout<<i;
        }
        cout<<"\n";
    } */      // for number pyramid
    
    int num=1;
    for (i=1; i<=rows; i++) {
        for (j=1; j<=i; j++) {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }    // floyids number tringle
    
    
    
    return 0;
}