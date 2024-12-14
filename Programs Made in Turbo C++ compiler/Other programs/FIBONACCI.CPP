#include<iostream.h>
#include<conio.h>

int fibo(int n) {
	if (n==1 || n==0){
		return 0;}
	if (n==2 || n==3){
		return 1;}
	else {
	return fibo(n-1)+fibo(n-2);}

}
int main() {
	clrscr();
	char y_or_n;
	do {
	int num;
	cout<<"Enter number = ";
	cin>>num;
	for (int i=0; i<=num; i++)
	cout<<fibo(i)<<"\n";
	cout<<"\nDo you want to find more fibonacci series number?(y/n)";
	cin>>y_or_n;
	}while( y_or_n =='y');
	return 0;
}