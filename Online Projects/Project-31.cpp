// Write a program in C++ to print the area of a hexagon.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float area, side;

    cout<<"Enter side: ";
    cin>>side;

    area = (6*(side*side))/(4*tan(M_PI/6));

    cout<<"The Area of Hexagon is "<<area;
    return 0;
}