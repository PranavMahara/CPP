// Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    if(a>51){
        cout<<"The difference of "<<a<<" and 51 is "<<3*(a-51)<<endl;
    }
    else{
        cout<<"The difference of "<<a<<" and 51 is "<<51-a<<endl;
    }
    return 0;
}