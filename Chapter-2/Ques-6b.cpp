// Write a program to create inline function (area of circle and label each area).

#include<iostream>
using namespace std;

inline void area_of_circle(float radius){
    static int p = 1;
    cout<<"Area of circle "<<p<<" is: "<<22/7.0*radius*radius<<endl;
    p++;
}

int main(){
    area_of_circle(1.1);
    area_of_circle(2.2);
    area_of_circle(3.3);
    area_of_circle(4.4);
    return 0;
}