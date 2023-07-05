// Write a program in C++ to find the first and last digit of a number. 

#include<iostream>
using namespace std;

int main(){
    int first, last;
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    last = n%10;

    while(n!=0){
        first = n%10;
        n = n/10;
    }

    cout<<"The first number is "<<first<<" and last number is "<<last;
    return 0;
}