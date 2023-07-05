// Write a program in C++ to compare two numbers.

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter 2 numbers a and b: ";
    cin>>a>>b;

    if(a>b){
        cout<<a<<" is greater";
    }

    else if(a<b){
        cout<<b<<" is greater";
    }

    else if(a==b){
        cout<<a<<" and "<<b<<" are equal";
    }
    return 0;
}