#include<iostream.h>
#include<conio.h>

void prs(double a[5]){
       int i,j,m;
for (i=0; i<5; i++) {
	for (j=i+1; j<5; j++) {
	if(a[i]<a[j]){
	m=a[i];
	a[i]=a[j];
	a[j]=m;   }}
       }
   /*    cout<<"\nFirst place = "<<a[0]<<"%";
       cout<<"\nSecond place = "<<a[1]<<"%";  */
}

int main () {
	clrscr();
    int subject[5],sum,stud,i,j,k,l,m;
    double prstg[5],cprstg[5];
    cout<<"Enter the no. of student = ";
    cin>>stud;

	for (i=0; i<stud; i++) {
	cout<<"Student = "<<i+1;
	cout<<"\n";
	for (j=0; j<5; j++) {
	num:
	cout<<"Enter numbers of subject "<<j+1<<" = ";
	cin>>subject[j];
	if(subject[j]>100){
	cout<<"Error: plz enter number below 100\n";
	goto num;}
	}
	sum=0;
	for (k=0; k<5; k++) {
	sum=sum+subject[k];
	}
	cout<<"Total gained markes = "<<sum<<"/500\n";
	prstg[i]=100*(float)sum/500;
	cout<<"Persantage = "<<prstg[i]<<"%\n";
	}
	for (i=0; i<stud; i++) {
		cprstg[i]=prstg[i];}
	prs(cprstg);
	for (i=0; i<stud; i++) {
		if (prstg[i]==cprstg[0]) {
			cout<<"\n\nFirst place =>"<<"Student = "<<i+1<<" Persantage = "<<prstg[i]<<"%";
			}}

	for (i=0; i<stud; i++) {
		if (prstg[i]==cprstg[1]){
			cout<<"\nSecond place =>"<<"Student = "<<i+1<<" Persantage = "<<prstg[i]<<"%";
			}}

    getch();
    return 0;
}