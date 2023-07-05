//  Write a program in C++ to find the area of Scalene Triangle.

#include<iostream>
using namespace std;

int main(){
    int base, height;
    cout<<"Enter the base and height of the triangle (in cm): ";
    cin>>base>>height;

    cout<<"The area of Scalene Triangle is "<<0.5*base*height<<" cm^2"<<endl;  // Insted of 0.5 you we can have 1/2.0
    return 0;
}