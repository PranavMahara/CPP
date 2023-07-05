// Write a program that defines a shape class with a constructor that gives value to width and height. 
// The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
// In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

#include<iostream>
using namespace std;

class shape{
    public:
        int width, height;
        shape(){
            cout<<"Enter the width --> ";
            cin>>width;
    
            cout<<"Enter the height --> ";
            cin>>height;
        }
};

class triangle : public shape{
    public:
        int area(){
            return 1/2.0*width*height;
        }
};

class rectangle : public shape{
    public:
        int area(){
            return width*height;
        }
};

int main(){
    triangle t;
    cout<<"The area is "<<t.area()<<endl;

    rectangle r;
    cout<<"The area is "<<r.area()<<endl;
    return 0;
}