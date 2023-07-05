// Write a program in C++ to find the sum of digits of a given number.

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    while(num!=0){
        sum = sum + num%10;
        num = num/10;
    }

    cout<<"The sum is "<<sum;
    return 0;
}