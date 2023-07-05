// Write a program to use this Pointer

#include<iostream>
using namespace std;

class Box{
    double length, breadth, height;
    public:
        Box(double l = 2.0, double b = 2.0, double h = 2.0, int a = 0){
            length = l;
            breadth = b;
            height = h;
        }

        double Volume(){
            return length*breadth*height;
        }

        int compare(Box box){
            return this->Volume()>box.Volume();
        }
};

int main(){
    
    return 0;
}