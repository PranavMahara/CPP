#include<iostream>
using namespace std;

class Point{
    public:
        double x, y;

    public:
        void OffSetPoint(Point p, double x, double y){
            p.x = p.x + x;
            p.y = p.y + y;
        }
};

int main(){
    Point p;
    p.x = 3.0;
    p.y = 4.0;
    p.OffSetPoint(p, 1.0, 2.0); 
    cout << "(" << p.x << "," << p.y << ")"; 
    return 0;
}