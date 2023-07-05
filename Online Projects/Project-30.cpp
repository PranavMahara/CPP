// Write a program in C++ to enter P, T, R and calculate Compound Interest.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int p, t, r, ci;
    cout<<"Enter the principal amount(in rupees): ";
    cin>>p;
    
    cout<<"Enter the time(in months): ";
    cin>>t;
    
    cout<<"Enter the rate of interest: ";
    cin>>p;

    cout<<"Enter how many times the Interest is compounded: ";
    cin>>ci;

    cout<<"Compound Interest --> "<<p*pow(1+r/ci, ci*t)<<endl;
    return 0;
}