// Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].
// error

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;

    int terms;
    cout<<"Enter the number of terms: ";
    cin>>terms;

    int sum = 0;
    for(float i=1; i<=terms; i++){
        sum = sum + pow(x, 5*i-4);
        sum = sum - pow(x, 5*i-2);
    }
    cout<<"The sum is"<<sum;
    return 0;
}