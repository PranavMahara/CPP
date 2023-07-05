// Write a program in C++ to find the factorial of a number.

#include<iostream>
using namespace std;

int main(){
    int factorial = 1;
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i=1; i<=num; i++){
        factorial = factorial*i;
    }

    cout<<"The factorial of "<<num<<" is "<<factorial;
    return 0;
}