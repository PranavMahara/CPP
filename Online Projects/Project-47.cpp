// Write a program in C++ to display the n terms of odd natural number and their sum.
// Input number of terms: 5
// The odd numbers are: 1 3 5 7 9
// The Sum of odd Natural Numbers upto 5 terms: 25
#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=1; i<(n*2); i+=2){
        sum = sum + i;
    }

    cout<<"The sum is "<<sum;
    return 0;
}