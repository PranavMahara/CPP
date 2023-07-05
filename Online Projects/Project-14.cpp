// Write a program in C++ to calculate the volume of a sphere.

#include<iostream>
using namespace std;

int main(){
    int radius;
    cout<<"Enter the radius: ";
    cin>>radius;

    cout<<"Volume of sphere is "<<1.3333*3.14*radius*radius*radius<<endl;
    cout<<"Volume of sphere is "<<4/3.0*3.14*radius*radius*radius<<endl;   // take care it is 4/3.0 not 4/3
    return 0;
}