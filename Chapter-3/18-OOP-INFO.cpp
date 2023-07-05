#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    
    private:
        int b;

    public:
        int c;
};

// In some languages the base class is called the superclass and the derived class is called the
// subclass. Some writers also refer to the base class as the parent and the derived class as the child.


// You should know that there’s a disadvantage to making class members protected. Say you’ve
// written a class library, which you’re distributing to the public. Any programmer who buys this
// library can access protected members of your classes simply by deriving other classes from
// them. This makes protected members considerably less secure than private members. To avoid
// corrupted data, it’s often safer to force derived classes to access data in the base class using
// only public functions in the base class, just as ordinary main() programs must do.

/*
    3 cases
                                Public derivation       Private Derivation      Protected Derivation
    1. Private Members          Not Inherited           Not Inherited           Not Inherited
    2. Protected Members        Protected               Private                 Protected
    3. Public Members           Public                  Private                 Protected
*/

/*
Access                  Accessible from              Accessible from               Accessible from
Specifier               Own Class Derived            Class Objects                 Outside Class

PUBLIC                      yes                          yes                            yes
PROTECTED                   yes                          yes                            no
PRIVATE                     yes                          no                             no

*/
class one : private Base{
    void display(){
        cout<<a<<endl;
        cout<<b<<endl; // Error
        cout<<c<<endl;
    }
};

class two : protected Base{
     void display(){
        cout<<a<<endl;
        cout<<b<<endl; // Error
        cout<<c<<endl;
    }
};

class three : public Base{
     void display(){
        cout<<a<<endl;
        cout<<b<<endl; // Error
        cout<<c<<endl;
    }
};

int main(){
    one x;
    x.a; // Error
    x.b; // Error
    x.c; // Error

    two y;
    y.a; // Error
    y.b; // Error
    y.c; // Error

    three z;
    z.a; // Error
    z.b; // Error
    z.c;

    return 0;
}