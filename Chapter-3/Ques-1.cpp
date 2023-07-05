// Write a class having two private variables and one member function which will return the area of the rectangle.

#include<iostream>
using namespace std;

class areass{
    int len, bread;
    public:
        void lengt(int a, int b){
            len = a;
            bread = b;
        }

        int area(){
            return len*bread;
        }
};

int main(){
    int a, b;
    cout<<"Enter length and breadth --> ";
    cin>>a>>b;

    areass are;
    are.lengt(a, b);
    cout<<"The area is "<<are.area()<<endl;

    return 0;
}