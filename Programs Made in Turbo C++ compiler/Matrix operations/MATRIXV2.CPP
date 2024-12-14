#include<iostream.h>
#include<conio.h>
void fmatrix(int fr1,int fc1,int fr2,int fc2,int fa[10][10],int fb[10][10]){
	int i,j;
	for (i=0; i<fr1; i++) {
		for (j=0; j<fc1; j++) {
			cout<<"\tenter 1st matrix "<<"["<<i<<","<<j<<"]";
			cin>>fa[i][j];
		}
	}
	cout<<"\n";
	for (i=0; i<fr2; i++) {
		for (j=0; j<fc2; j++) {
			cout<<"\tenter 2nd matrix "<<"["<<i<<","<<j<<"]";
			cin>>fb[i][j];
		}
	}
}
void prtadsbmatx(int fr1,int fc1,int fc[10][10]){
		for (int i=0; i<fr1; i++) {
			for (int j=0; j<fc1; j++) {
				cout<<fc[i][j]<<" ";
			}
		cout<<"\n";
		} }
int main () {
	char y_or_n;
	do {
	clrscr();
	int r1,c1,r2,c2;
	cout<<"\nEnter Row and Colum of 1st Matrix";
	cin>>r1>>c1;
	cout<<"\nEnter Row and Colum of 2nd Matrix";
	cin>>r2>>c2;

	if (r1==0||c1==0||r2==0||c2==0){
		cout<<"Invalid matrix type";
		goto er;
	}

	int a[10][10],b[10][10],c[10][10],i,j,k;
	char optr;
	cout<<"\n\nEnter operator :";
	cin>>optr;
	switch (optr) {

	case '*':
		 if (c1!=r2) {
			 cout<<"Multiplication is not possible";
			 break;
		 } else {
		fmatrix(r1,c1,r2,c2,a,b);
	for (i=0; i<2; i++) {
			for (j=0; j<2; j++) {
				c[i][j]=0;
			}
		 }
	 for (i=0; i<r1; i++) {
		for (j=0; j<c2; j++) {
			for (k=0; k<c1; k++) {
				c[i][j]+=a[i][k]*b[k][j];
			 }
		}
	 }
    cout<<"\n\nMultiplication of matrix is \n";
    for (i=0; i<r1; i++) {
		for (j=0; j<c2; j++) {
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	} }
	break;
	case '+' :
		if(r1!=r2 || c1!=c2) {
			cout<<"\nAddition is not possible";
			break;
		} else {
		fmatrix(r1,c1,r2,c2,a,b);
	for (i=0; i<r1; i++) {
			for (j=0; j<c1; j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	cout<<"\n\nAdddition of matrix is \n";
	prtadsbmatx(r1,c1,c); }
		break;
	case '-' :
		if (r1!=r2 || c1!=c2) {
			cout<<"Subtraction is not possible";
			break;
		} else {
		fmatrix(r1,c1,r2,c2,a,b);
		for (i=0; i<c1; i++) {
			for (j=0; j<c1; j++) {
				c[i][j]=a[i][j]-b[i][j];
			}
		}
	cout<<"\n\nSubtraction of matrix is \n";
	prtadsbmatx(r1,c1,c);  }
	break;
	default :
		cout<<"Choose a valid operator\n\t valid operators are (+,-,*)";
	}
	er:
	cout<<"\n\nWant to perform more matrix calculations? (Y/N)";
	cin>>y_or_n; } while (y_or_n=='y');
	return 0;
}