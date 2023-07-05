// Write a program in C++ to find the area of any triangle using Heron's Formula. 

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a, b, c;
    cout<<"Enter sides a, b, c: ";
    cin>>a>>b>>c;    

    float s = (a+b+c)/2;

    float k = pow(s*(s-a)*(s-b)*(s-c), 0.5);

    cout<<"Area --> "<<k;
    return 0;
}