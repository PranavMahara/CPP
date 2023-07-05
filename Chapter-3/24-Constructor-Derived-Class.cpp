#include<iostream>
using namespace std;
/*
Case 1:
    class B : public A{
        // Order of execution of constructor -> first A() then B()
    };

Case 2:
    class A: public B, public C{
        // Order of execution of constructor -> B() then C() then A()
    };

Case 3:
    class A: public B, virtual public C{
        // Order of execution of constructor -> C() then B() and A()
    };

*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base class constructor called of B1"<<endl;
        }
        void printDataB1(){
            cout<<"The value of data is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base class constructor called of B2"<<endl;
        }
        void printDataB2(){
            cout<<"The value of data is "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{ // Base2 pehle likhoge toh order change hojega
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){ // Idhar order change karoge toh order wont change
            derived1 = c;
            derived2 = d;
        }

        void printDataDerived(){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main(){
    Derived arjun(1, 2, 3, 4);
    arjun.printDataDerived();
    return 0;
}