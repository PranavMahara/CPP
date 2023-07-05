// Write a program in C++ to add two numbers accept through keyboard and reverse them.

#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;

    cout<<"The value of x before changing is "<<x<<" and the value of y before changing is "<<y<<endl;

    int temp;
    temp = x;
    x = y;
    y = temp;

    cout<<"The value of x is now "<<x<<" and the value of y is now "<<y;

    return 0;
}