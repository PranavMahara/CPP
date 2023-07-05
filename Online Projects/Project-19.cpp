// Write a program in C++ to compute the total and average of four numbers.

#include<iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cout<<"Enter a, b, c, d --> ";
    cin>>a>>b>>c>>d;

    cout<<"The average of 4 numbers are "<<(a+b+c+d)/4.0;
    return 0;
}