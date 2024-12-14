#include<iostream.h>
#include<conio.h>

int main() {
clrscr();
	int a[5],i,loc;

	for (i=0; i<5; i++) {
	cout<<"\nenter no."<<i+1<<" = ";
	cin>>a[i];}

	cout<<"\nEnter location of the no. you want to delete =";
	cin>>loc;

	for (i=loc-1; i<5; i++) {
	a[i]=a[i+1];
	}
	for (i=0; i<4; i++) {
	cout<<"\n"<<a[i];
	}
	getch();
	return 0;
	}
