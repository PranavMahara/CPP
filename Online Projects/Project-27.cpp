// Write a program in C++ which swap the values of two variables not using third variable.

#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter x and y: ";
    cin>>x>>y;

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"The value of x after swapping is "<<x<<" and the value of y after swapping is "<<y<<endl;
    

    return 0;
}