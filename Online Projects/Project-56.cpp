// Write a program in C++ to calculate product of digits of any number.

#include<iostream>
using namespace std;

int main(){
    int product = 1;
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    while(n!=0){
        product = product*(n%10);
        n = n/10;
    } 

    cout<<"The product of numbers is "<<product;
    return 0;
}