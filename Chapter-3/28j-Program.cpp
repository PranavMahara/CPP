#include<iostream>
using namespace std;

class Point {
    public:
        double x, y;
};

class Vector {
    public:
        Point start, end;
};

int main() {
    Vector vec1;// define vec1 of Vector class
    vec1.start.x = 3.0;  // If we declare x and y as private in Point class then x and y becomes inaccessible
    vec1.start.y = 4.0;
    vec1.end.x = 5.0;
    vec1.end.y = 6.0;

    return 0;
}