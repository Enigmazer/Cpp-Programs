#include<iostream>
using namespace std;

class tempconverter{
    public:
    double tempinput;
    char unit,pref,cunit;    // unit for temprature unit (like c,k,f), pref for prefrence, cunit for convertion unit
                // Created functions for conversion
    double ctok(double tempinput){              
        return tempinput+273.15;
    }
    double ktoc(double tempinput){
        return tempinput-273.15;
    }
    double ftoc(double tempinput){
        return (tempinput-32)*5/9;
    }
    double ctof(double tempinput){
        return (tempinput*9/5)+32;
    }
    double ftok(double tempinput){
        return (tempinput-32)*5/9+273.15;
    }
    double ktof(double tempinput){
        return (tempinput-273.15)*9/5+32;
    }
    void error(){
        cout<<"error: That's not a valid input"<<endl;
    }
};

int main () {
    tempconverter to1;
    do{
    cout<<"Enter temprature = ";    //taking temprature input
    cin>>to1.tempinput;
    do{
    cout<<"\nEnter temprature unit = "; //asking temprature unit
    cin>>to1.unit;
    do{
    switch(to1.unit) {
        case 'c': cout<<"Celsius to kelvin or fahrenheit = ";
                  cin>>to1.cunit;        //asking for convertion unit
                  if(to1.cunit == 'f'){
                    cout<<"F = "<<to1.ctof(to1.tempinput);
                  }
                  else if (to1.cunit == 'k'){
                    cout<<"K = "<<to1.ctok(to1.tempinput);
                  } 
                  else {
                    to1.error();
                  }
        break;
        case 'f': cout<<"Fahrenheit to celsius or kelvin = ";
                  cin>>to1.cunit;
                  if(to1.cunit == 'c'){
                    cout<<"C = "<<to1.ftoc(to1.tempinput);
                  }
                  else if (to1.cunit == 'k'){
                    cout<<"K = "<<to1.ftok(to1.tempinput);
                  } 
                  else {
                    to1.error();
                  }
        break;
        case 'k': cout<<"Kelvin to celsius or fahrenheit = ";
                  cin>>to1.cunit;
                  if(to1.cunit == 'c'){
                    cout<<"C = "<<to1.ktoc(to1.tempinput);
                  }
                  else if (to1.cunit == 'f'){
                    cout<<"F = "<<to1.ktof(to1.tempinput);
                  } 
                  else {
                    to1.error();
                  }
        break;
        default:  to1.error();
        break;
    }
    cout<<"\n\nEnter: \nz for changing convertion unit\nt for changing temprature\nu for changing unit \nc for cancel?\n(z/t/u/c) = ";
    cin>>to1.pref;
    }while(to1.pref == 'z');
    }while(to1.pref == 'u');
    }while(to1.pref == 't');
    return 0;
}