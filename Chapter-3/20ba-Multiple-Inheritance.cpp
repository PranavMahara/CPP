// Multiple Inheritance:In this type of inheritance a single derived class may inherit from two or more than two base classes.

#include<iostream>
using namespace std;

class A{
    public:
        int a;
        void getA(){
            cout<<"Enter an Integer value --> ";
            cin>>a;
        }
};

class B{
    public:
        int b;
        void getB(){
            cout<<"Enter an Integer value --> ";
            cin>>b;
        }
};
        
class C : public A, public B{
    public:
        int c;
        void add(){
            c=a+b;
            cout<<a<<" + "<<b<<" = "<<c<<endl;
        }
};

int main(){
    C obj;
    obj.getA();
    obj.getB();
    obj.add();
}

