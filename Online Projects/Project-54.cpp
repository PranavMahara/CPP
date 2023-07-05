// Write a program in C++ to find the Sum of GP series.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float n, a, r;
    cout<<"Enter a, r, n --> ";
    cin>>a, r, n;

    float k = (a*(pow(r, n)-1))/(r-1);
    cout<<"The sum of GP is "<<k;    
    return 0;
}
