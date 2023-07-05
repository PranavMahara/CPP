// Write a program in C++ to compute the sum of the digits of an integer using function.

#include<iostream>
using namespace std;
int sum(int a){
    int sum = 0;
    while(a!=0){
        sum = sum + a%10;
        a = a/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The sum of digits is "<<sum(n);

    return 0;
}