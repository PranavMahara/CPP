// Write a program in C++ to display the first n terms of Fibonacci series.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a = 0, b = 1;
    cout<<a<<" "<<b<<" ";
    
    for(int i=3; i<=n; i++){
        int c = a + b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
    return 0;
}