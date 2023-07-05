// Write a C++ program to find the square root of a number using Babylonian method.

#include <iostream>

using namespace std; 

float square_Root(float num){ 
        float x = num; 
        float y = 1; 
        float e = 0.000001;
        while (x - y > e) { 
            x = (x + y) / 2; 
            y = num / x; 
        } 
        return x; 
    } 
  
int main(){ 
    int n;
    cout<<"Enter a number: ";
    cin>>n; 
    cout << "Square root of " << n << " is " << square_Root(n); 
    return 0;
}