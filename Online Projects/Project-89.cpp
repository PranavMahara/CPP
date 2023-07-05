// Write a C++ program to find the number of trailing zeroes in a given number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = 0;

    while(n!=0){
        if(n%10==0){
            count++;
        }

        else if(n%10!=0){
            break;
        }
        n = n/10;
    }

    cout<<"The Number of Trailing Zeros : "<<count<<endl;
    return 0;
}