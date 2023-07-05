// Write a program in C++ to display the operation of pre and post increment and decrement.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"The value of a is "<<a<<"\n";
    a++;
    cout<<"The value of a is "<<a<<"\n";
    ++a;
    cout<<"The value of a is "<<a<<"\n";

    cout<<"--------------------------\n";

    cout<<"The value of a is now "<<a++<<"\n";
    cout<<"The value of a is now "<<a--<<"\n";
    cout<<"The value of a is now "<<++a<<"\n";
    cout<<"The value of a is now "<<--a<<"\n";

    cout<<"--------------------------\n";
    
    cout<<"The Final value of a is "<<a<<"\n";
    
    return 0;
}