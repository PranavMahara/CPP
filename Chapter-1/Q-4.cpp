//  Write a program to create function with Return type and Argument.

#include<iostream>
using namespace std;

int sum(int x, int y){
    return (x+y);
}

int main(){
    int a, b;
    cout<<"Enter the number --> ";
    cin>>a>>b;

    cout<<"The sum is --> "<<sum(a, b);
    return 0;
}