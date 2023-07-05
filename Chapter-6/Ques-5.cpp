// Write a program for using function overriding.

#include<iostream>
using namespace std;

class Base{
    public:
        void print(){
            cout<<"Base Function"<<endl;
        }
};

class Derived : public Base{
    public:
        void print(){
            cout<<"Derived Function"<<endl;
        }
};

int main(){
    Derived d1, d2;
    d1.print();
    d2.Base::print();
     
    return 0;
}