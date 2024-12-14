#include<iostream.h>
#include<conio.h>
#include<math.h>

main () {
	char i;
	clrscr();
	do {
       int num,Nnum=0,temp,r,count=0;
	   cout<<"\n\nEnter no. ";
	   cin>>num;
	   temp=num;

	   while(temp!=0){

		temp=temp/10;
		count++;

	   }

	   temp=num;

	   while(temp!=0) {

		 r=temp%10;
		 Nnum=(Nnum*10)+r;
		 temp=temp/10;

	   }
	   cout<<"\nReversed num = "<<Nnum;

       if(num==Nnum) {

       cout<<"\nThis is a Perendiom no. ";

       }/* else {

       cout<<"\nThis not a armstrong no. ";

       } */
       cout<<"\n\nwant to continue?(Y/N)";
       cin>>i;
	}
	 while(i=='y');


       return 0;
}