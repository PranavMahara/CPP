// Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
// check
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"The sum of n terms is "<<(n*(n+2)*(n+2))/6<<endl;
    return 0;
}