#include<iostream.h>
#include<conio.h>
int fact(double n) {
	if(n<0) {
	return -1;}
	if(n==0) {
	return 1;}
	else {
	return (n*fact(n-1));
	}
	}
int main () {
	clrscr ();
	double num;
	cin>>num;
	cout<<fact(num);
	getch();
	return 0;
	}