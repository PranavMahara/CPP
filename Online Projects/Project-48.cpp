// Write a program in C++ to display the n terms of 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    float sum = 0;

    for(float i=1; i<=n; i++){
        sum = sum + 1/i;
    }

    cout<<"The sum is "<<sum;
    return 0;
}