// Write a program in C++ to find the number and sum of all integer between two numbers which are divisible by 9

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    for(a; a<b; a++){
        if(a%9==0){
            cout<<a<<" ";
            sum = sum + a;
        }
    }

    cout<<"The sum is "<<sum;
    return 0;
}