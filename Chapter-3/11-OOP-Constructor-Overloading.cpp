#include<iostream>
using namespace std;

class Complex{
    int a, b;
    
    public:
        Complex(int x, int y){
            a = x;
            b = y;
            cout<<"First"<<endl;
        }

        Complex(int x){
            a = x;
            b = 0;
            cout<<"Second"<<endl;
        }

        Complex(){
            a = 0;
            b = 0;
            cout<<"Third"<<endl;
        }

        void display(){
            cout<<"The point is ("<<a<<" , "<<b<<")"<<endl;
        }
};

int main(){
    Complex c1(4, 6);
    c1.display();

    Complex c2(5);
    c2.display();

    Complex c3;
    c3.display();
    return 0;
}

// (i) These are called automatically when the objects are created. 
// (ii) All objects of the class having a constructor are initialized before some use. 
// (iii) These should be declared in the public section for availability to all the 
// functions. 
// (iv) Return type (not even void) cannot be specified for constructors. 
// (v) These cannot be inherited, but a derived class can call the base class 
// constructor. 
// (vi) These cannot be static. 
// (vii) Default and copy constructors are generated by the compiler wherever 
// required. Generated constructors are public. 
// (viii) These can have default arguments as other C++ functions. 
// (ix) A constructor can call member functions of its class. 
// (x) An object of a class with a constructor cannot be used as a member of a 
// union.
// (xi) A constructor can call member functions of its class.
// The make implicit calls to the memory allocation and deallocation operators 
// new and delete. 
// (xiv) These cannot be virtual