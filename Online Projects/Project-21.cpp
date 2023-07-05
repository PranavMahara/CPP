// Write a program in C++ to check whether a number is positive, negative or zero.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    if(a>0){
        cout<<"Positive";
    }

    else if(a<0){
        cout<<"Negative";
    }

    else if(a==0){
        cout<<"Zero";
    }

    return 0;
}