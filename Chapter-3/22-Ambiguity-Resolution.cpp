#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }

};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho? "<<endl;
        } 
};

class Derived : public Base1, public Base2{

};

int main(){
    Base1 p;
    p.greet();

    Base2 a;
    a.greet();

    // Derived o;   // Ambuguity, Derived class mein 2 greet hai and it is confused which greet to use
    // o.greet();
    return 0;
}