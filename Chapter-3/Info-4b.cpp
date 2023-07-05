#include<iostream>
using namespace std;

class Base{ //Abstract base class
    public:
        virtual void show() = 0; //Pure Virtual Function
};

class Derived:public Base{
    public:
        void show()
        { cout << "Implementation of Virtual Function in Derived class"; }
};

int main(){
    Base obj; //Compile Time Error
    Base *b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}

// Output : Implementation of Virtual Function in Derived class
// In the above example Base class is abstract, with pure virtual show() function, hence we cannot 
// create object of base class.


/*

Why can't we create Object of Abstract Class ?
When we create a pure virtual function in Abstract class, we reserve a slot for a function in the 
VTABLE(studied in last topic), but doesn't put any address in that slot. Hence the VTABLE will be 
incomplete.
As the VTABLE for Abstract class is incomplete, hence the compiler will not let the creation of 
object for such class and will display an errror message whenever you try to do so.

*/
