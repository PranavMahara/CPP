// Inheriting is a method of inheritance where one or more derived classes is derived from common base class.

#include<iostream>
using namespace std;

class A{
    public:
        int a, b;
        void getnumber(){
            cout<<"Enter Number : ";
            cin>>a;
        }
};

class B : public A{
    public:
        void square(){
            getnumber();
            cout<<"Square of the number : "<<(a*a)<<endl;
        }
};

class C :public A{
    public:
        void cube(){
            getnumber(); //Call Base class property
            cout<<"Cube of the number --> "<<(a*a*a);
        }
};

int main(){
    B b1; 
    b1.square(); 
    C c1; 
    c1.cube(); 

    return 0;
}
