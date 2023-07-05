//  Write a program in C++ to check for Narcissistic decimal numbers.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int k = n;
    int j = n;
    int count = 0;
    while(n!=0){
        count++;
        n=n/10;
    }   

    int sum = 0;
    while(k!=0){
        sum = sum + (int)pow(k%10, count);
        k = k/10;
    }

    if(sum==j){
        cout<<"The number "<<j<<" is Narcissistic number"<<endl;
    }
    
    else{
        cout<<"The number "<<j<<" is not Narcissistic number"<<endl;
    }
    return 0;
}