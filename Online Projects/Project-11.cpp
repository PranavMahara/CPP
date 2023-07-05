// Write a program in C++ to convert temperature in Celsius to Fahrenheit.

#include<iostream>
using namespace std;

int main(){
    float celc;
    cout<<"Enter the temperature in Celcius: ";
    cin>>celc;

    cout<<"The value of temperature in Fahrenheit is "<<1.8*celc+32<<" F"<<endl;
    cout<<"The value of temperature in Fahrenheit is "<<9/5.0*celc+32<<" F";
    return 0;
}