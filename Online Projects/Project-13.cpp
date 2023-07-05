// Write a program in C++ to find the area and circumference of a circle

#include<iostream>
using namespace std;

int main(){
    int radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    cout<<"The Area of circle is "<<3.14*radius*radius<<endl;
    cout<<"The Circumference of circle is "<<2*3.14*radius<<endl;

    return 0;
}