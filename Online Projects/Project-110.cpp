// Write a program in C++ to check if a number is Harshad Number (Niven) or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int k = n;

    int sum;
    for(sum=0; n>0; sum += n%10, n/=10){
    }

    // cout<<"The sum is "<<sum;
    if(k%sum==0){
        cout<<k<<" is Harshad";
    }

    else{
        cout<<k<<" is not Harshad";
    }
    return 0;
}