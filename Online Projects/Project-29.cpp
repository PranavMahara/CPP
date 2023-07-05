// Write a program in C++ to calculate area of an equilateral triangle.

#include<iostream>
using namespace std;
#include<math.h>

int main(){
    float side;
    float area;
    cout<<"Enter the value of the side of the equilateral triangle: ";
    cin>>side;
    area = sqrt(3)/4*(side*side);
    cout<<" The area of equilateral triangle is: "<<area<<endl;
 return 0;
}