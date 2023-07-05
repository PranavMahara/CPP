// Write a program for single inheritance

#include<iostream>
using namespace std;
float pi = 22/7.0;

class circle{
    public:
        float radius;
        void area(){
            cout<<"Area of Circle is "<<pi*radius*radius<<endl;
        }
};

class sphere : public circle{
    public:
        void volume(){
            cout<<"Enter the radius --> ";
            cin>>radius;
            area();
            cout<<"Volume of Sphere is "<<(4*pi*radius*radius*radius)/3;
        }
};

int main(){
    circle c1;
    sphere s1;

    // c1.area();
    s1.volume();

    return 0;
}