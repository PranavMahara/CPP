// Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^2 + ..+ 1/n^2.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + pow(i*i, -1);
    }

    cout<<"The sum is "<<sum<<endl;
    return 0;
}