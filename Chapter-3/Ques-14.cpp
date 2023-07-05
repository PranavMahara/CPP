// Write a program to demonstrate Friend function

#include<iostream>
using namespace std;

class Polar{
    float radius, angle;

    public:
        void input(){
            cout<<"Enter radius: ";
            cin>>radius;

            cout<<"Enter angle: ";
            cin>>angle;
        }

        void display(){
            cout<<"Radius --> "<<radius<<endl;
            cout<<"Angle --> "<<angle<<endl;
        }
    
    friend Polar add(Polar, Polar);
};

Polar add(Polar o1, Polar o2){
    Polar temp;
    temp.radius = o1.radius + o2.radius;
    temp.angle = o1.angle + o2.angle;

    return temp;
}


int main(){
    Polar p1, p2, addition;
    cout<<"Enter First Object: "<<endl;
    p1.input();

    cout<<"Enter Second Object: "<<endl;
    p2.input();

    addition = add(p1, p2);
    cout<<"First Object --> "<<endl;
    p1.display();
    
    cout<<"Second Object --> "<<endl;
    p2.display();

    cout<<"Addition of first and second: "<<endl;
    addition.display();

    return 0;
}