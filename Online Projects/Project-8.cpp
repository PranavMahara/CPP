// Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    if(a==b){
        cout<<"The sum of "<<a<<" and "<<b<<" is "<<3*(a+b)<<endl;
    }
    else{
        cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
    return 0;
}