// Given the following code add a destructor for Foo class.

// #include <iostream>

// class Foo {
// public:
//     Foo( void )
//     { std::cout << "Foo constructor 1 called" << std::endl; }


// int main( )
// {
//     Foo foo_1;
//     return 0;
// }

#include <iostream>
using namespace std;

class Foo {

    public:
        Foo(){
            cout << "Foo constructor 1 called" <<endl; 
        }
        
        ~Foo() {
        cout << "Inside Destructor"<<endl;
        cout << "C++ Object destructed"<<endl;
        }
};
int main( ){
    Foo foo_1;
    return 0;
}