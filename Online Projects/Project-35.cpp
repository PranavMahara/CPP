// Write a program in C++ to check whether a number is prime or not.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    if((a ==2 || a == 3 || a == 5 || a== 7) || a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 && a!=1){
        cout<<a<<" is a Prime Number";
    }

    else{
        cout<<a<<" is not a Prime Number";
    }

    return 0;
}