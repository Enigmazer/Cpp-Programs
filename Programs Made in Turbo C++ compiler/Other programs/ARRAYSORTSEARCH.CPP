#include <iostream.h>
#include <conio.h>

void sort(int fa[],int farsize)  {
	for (int i=0; i<farsize; i++){
	for (int j=i+1; j<farsize; j++){
	if (fa[i]>fa[j]) {
	int  temp=fa[i];
	     fa[i]=fa[j];
	     fa[j]=temp;
	    } } } }

void arprt(int fa[],int farsize){
	for (int i=0; i<farsize; i++) {
	cout<<fa[i]<<endl;} }
void search(int fa[],int farsize,int ffino){
	int count=0;
	for (int i=0; i<farsize; i++) {
		if(fa[i]==ffino){
		cout<<"\nits found on "<<i+1<<" number";
		count++;
		}}
		if(count==0){
		cout<<"\nDidn't found the number "<<ffino;}}

int main() {
	clrscr();
	int a[10],b[10],i,j,arsize,temp;
	cout<<"\nEnter no. of elements = ";
	cin>>arsize;
	for (i=0; i<arsize; i++) {
	cout<<"\nEnter no. "<<i+1<<" = ";
	cin>>a[i];}
	for(i=0; i<arsize; i++) {
	b[i]=a[i];}
	sort(b,arsize);
	cout<<"\nBefore sorting"<<endl;
	arprt(a,arsize);
	cout<<"\nAfter sorting"<<endl;
	arprt(b,arsize);
	char y_or_n;
	cout<<"\nDo you want to find any no.?(y/n)";
	cin>>y_or_n;

	int nono;
	cout<<"\nHow many numbers do you want to find?";
	cin>>nono;
	for (i=0; i<nono; i++){
	if(y_or_n=='y') {
	int fino;
	cout<<"\nWhich no. you want to find = ";
	cin>>fino;
	cout<<"\nwithout sorting";
	search(a,arsize,fino);
	cout<<"\nwith sorting";
	search(b,arsize,fino);} }
	getch();
	return 0;
	}


