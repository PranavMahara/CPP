// Write a program in C++ to check if pronic or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=0; i<n; i++){
        if((i*(i+1))==n){
            cout<<n<<" is pronic"<<" of numbers "<<i<<" and "<<i+1<<endl;
        }
    }
    return 0;
}