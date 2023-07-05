// Write a program in C++ to check whether a given number is Perfect or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum = 0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }

    if(sum==n){
        cout<<"The number is perfect!";
    }
    else{
        cout<<"The number is not perfect!";
    }
    
    return 0;
}