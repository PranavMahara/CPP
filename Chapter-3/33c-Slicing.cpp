// In C++, a derived class object can be assigned to a base class object, but the other way is not
// possible.

// class Base { int x, y; };
// class Derived : public Base { int z, w; };
// int main(){
//     Derived d;
//     Base b = d; // Object Slicing, z and w of d are sliced off
// }

// Object Slicing happens when a derived class object is assigned to a base class object, additional
// attributes of a derived class object are sliced off to form the base class object.

#include <iostream>
using namespace std;

class Base{
    protected:
        int i;

    public:
        Base(int a) { i = a; }
        virtual void display(){
            cout << "I am Base class object, i = " << i << endl;
        }
};

class Derived : public Base{
        int j;

    public:
        Derived(int a, int b) : Base(a) { j = b; }
        virtual void display(){
            cout << "I am Derived class object, i = "
                << i << ", j = " << j << endl;
        }
};

// Global method, Base class object is passed by value
void somefunc(Base obj){
    obj.display();
}

int main(){
    Base b(33);
    Derived d(45, 54);
    somefunc(b);
    somefunc(d); // Object Slicing, the member j of d is sliced off

    return 0;
}

// We can avoid above unexpected behavior with the use of pointers or references. Object slicing 
// doesn’t occur when pointers or references to objects are passed as function arguments since a pointer 
// or reference of any type takes same amount of memory. For example, if we change the global 
// method myfunc() in the above program to following, object slicing doesn’t happen.

// We get the same output if we use pointers and change the program to following.
// // rest of code is similar to above
// void somefunc (Base *objp)
// {
//  objp->display();
// }
// int main()
// {
//      Base *bp = new Base(33) ;
//      Derived *dp = new Derived(45, 54);
//      somefunc(bp);
//      somefunc(dp); // No Object Slicing

//      return 0;
// }

// Object slicing can be prevented by making the base class function pure virtual there by disallowing 
// object creation. It is not possible to create the object of a class which contains a pure virtual method