//  Write a program in C++ to check whether a number is Disarium or not.
// wrong output

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int k = n;
    int p = n;
    int count = 0;
    while(n!=0){
        count++;
        n=n/10;
    }

    int sum = 0;
    while(k!=0 && count!=0){
        sum = sum + (int)pow(k%10, count);
        count--;
    }

    if(sum == p){
        cout<<"The number is disarium"<<endl;
    }

    else{
        cout<<"The number is not disarium"<<endl;
    }


    return 0;
}