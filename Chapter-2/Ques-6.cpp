// Write a program to create inline function.

#include<iostream>
using namespace std;

inline void area_of_circle(float radius){
    cout<<"Area of circle is: "<<22/7.0*radius*radius<<endl;
}

int main(){
    float r;
    cout<<"Enter the radius --> ";
    cin>>r;

    area_of_circle(r);
    return 0;
}