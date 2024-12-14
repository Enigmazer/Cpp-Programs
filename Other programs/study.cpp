#include<iostream>
#include<string.h>
using namespace std;

// refrance variable*******************************************************

// int main(){
//     int normal_variable;
//     int &refrence_variable=normal_variable;
//     normal_variable=5;
//     cout<<refrence_variable;
//     return 0;    
// }


//passing obj as anrgument to function**************************************

// class MyClass {
//     public:
//     int x;
//     void prt(){
//     cout<<x;}
// };

// void function(MyClass &objt){     //passed as refrence mean changes here will be reflected in real one also
//     objt.prt();
// }

// int main () {
//     MyClass objt;
    
//     objt.x=5;
//     function(objt);
//     // return 0;
// }


//parametered constructor***************************************************

// class Employee{
//     public:
//     int id;
//     string name;
//     float salary;

//     Employee (int i,string n,float s){
//         id=i;
//         name=n;
//         salary=s;
//     }

//     void display() {
//         cout<<id<<" "<<name<<" "<<salary;
//     }
// };
// int main (){
//     Employee E1=Employee(01,"E1",20000);
//     E1.display();
//     return 0;
// }

//polymorphism****************************************************************

// class Animal{
//     public:
//     virtual void eat(){
//         cout<<"eating.....";
//     }
// };

// class Dog : public Animal{
//     public:
//     void eat(){
//         cout<<"eating bred.......";
//     }
// };

// int main (void){
//     // Dog d=Dog();
//     // d.eat();
//     Animal *a;
//     Animal an;
//     Dog d;
//     a=&an;
//     a->eat();
//     a=&d;
//     a->eat();
//     return 0;
// }

//funnctuion overloding***************************************************

// class cal {
//     public:
//     static int add(int a,int b) {
//         return a+b;
//     }
//     static int add(int a,int b,int c){
//         return a+b+c;
//     }
// };
// int main () {
//     cal c;
//     cout<<c.add(10,20)<<endl;
//     cout<<c.add(10,20,30)<<endl;
//     return 0;
// }

//friend function **********************************************************

// class Box{
//     private:
//     int length;
//     public:
//     Box():length(0){}
//     friend int add_length(Box);
// };
// int add_length(Box b){
//     int input;
//     cout<<"Enter length = ";
//     cin>>input;
//     b.length+= input;          //accedsing private member outside the class
//     return b.length;
// }
// int main () {
//     Box b;
//     cout<<"Length = "<<add_length(b);
//     return 0;
// }

// static member function***********************************************

// class Box{
//     private:
//     static int length;
//     public:
//     static void print(){
//         cout<<"length = "<<length;
//     }
// };
// int Box::length = 10;      //calling static meamber variable without creting an object
// int main () {
//     Box::print();         //calling static meamber function without creting an object
//     return 0;
// }

// static data member ***************************************************

// class Counter{
//     private:
//     static int count;
//     public:
//         Counter(){
//             count++;
//         }
//     void print() {
//         cout<<"Count = "<<count;
//     }
// };
// int Counter::count=10;
// int main () {
//     Counter b1;
//     Counter b2;

//     b1.print();         //only one copy of static member is created for all the objects so it will print 12 insted of 11
//     return 0;
// }

//nested class*************************************************************

// class Outer{
//     public:
//     class Inner {
//         public:
//         void prt(){
//             cout<<"A";
//         }
//     };
// };

// int main () {
//     Outer::Inner obj;
//     obj.prt();
// }

//fibbonachi serise**********************************************************

// int fibbo(int a, int b, int n){
//     int c;
//     c=a+b;
//     a=b;
//     b=c;
//     cout<<c<<endl;
//     if (n==3)
//     return 0;
//     return fibbo(a,b,n-1);
// }
// int main (){
//     int a,b,n;
//     cin>>a>>b>>n;
//     fibbo(a,b,n);
//     return 0;
// }

//factorial******************************************************************

// int fact(int n){
//     if (n==0 || n==1)
//     return 1;
//     else{
//         return n*fact(n-1);
//     } 
// }
// int main () {
//     int n;
//     cin>>n;
//     cout<<fact(n);
//     return 0;
// }

//program to square array value*********************************************

// int size;
// void Square_Array(int arry[]){
//     for (int i=0; i<size; i++){
//         arry[i]*=arry[i];
//     }
// }

// int main (){
//     cout<<"Enter Arry size = "; 
//     cin>>size;
//     int arry[size];
//     cout<<"Enter values"<<endl;
//     for (int i=0; i<size; i++){
//         cin>>arry[i];
//     }
//     Square_Array(arry);
//     cout<<"Squared arry";
//     for (int i=0; i<size; i++){
//         cout<<arry[i]<<" ";
//     }
//     return 0;
// }

//simple sorting************************************************************

// int size;
// void sort(int arry[]){
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++)
//         if(arry[i]>arry[j]){
//             int temp=arry[i];
//             arry[i]=arry[j];
//             arry[j]=temp;
//         }
//     }
// }

// int main(){
//     cout<<"Enter Arry size = "; 
//     cin>>size;
//     int arry[size];
//     cout<<"Enter values"<<endl;
//     for (int i=0; i<size; i++){
//         cin>>arry[i];
//     }
//     sort(arry);
//     cout<<"Sorted array"<<endl;
//     for (int i=0; i<size; i++){
//         cout<<arry[i]<<endl;
//     }
//     return 0;
// }