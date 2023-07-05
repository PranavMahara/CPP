// Write a program in C++ to check whether a given number is Deficient or not.

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    if(sum<2*n){
        cout<<"The number is deficient"<<endl;
    }

    else{
        cout<<"The number is not deficient"<<endl;
    }
    return 0;
}