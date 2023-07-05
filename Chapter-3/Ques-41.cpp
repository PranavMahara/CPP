// Write a C++ program to demonstrate the use of virtual functions and polymorphism.
#include <iostream>
using namespace std;

class base{
    public:
        virtual void vfunc(){
            cout << "This is base class function" << endl;
        }
};

class derived1 : public base{
    public:
        void vfunc()
        {
            cout << "This is derived1's function" << endl;
        }
};

class derived2 : public base{
    public:
        void vfunc()
        {
            cout << "This is derived2's vfunc()" << endl;
        }
};

int main(){
    base *p, b;
    derived1 d1;
    derived2 d2;
    // point to Base
    p = &b;
    p->vfunc();
    // point to derived1
    p = &d1;
    p->vfunc();
    // point to derived2
    p = &d2;
    p->vfunc();
    return 0;
}