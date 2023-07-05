// Write a C++ program that demonstrates the concept of function overriding.

#include <iostream>
using namespace std;

class Base{
    public:
        void show(){
            cout << "base " << endl;
        }
};

class Derived : public Base{
    public:
        void show(){
            cout << "derived" << endl;
        }
};

int main(){
    Derived d;
    d.show();       
    d.Base::show(); 
}
