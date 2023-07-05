//  Write a program in C++ to find prime number within a range. 

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter 2 numbers a, b: ";
    cin>>a>>b;

    for(a; a<b; a++){
        if((a ==2 || a == 3 || a == 5 || a== 7) || a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 && a!=1){
        cout<<a<<" ";
        }
    }
    return 0;
}