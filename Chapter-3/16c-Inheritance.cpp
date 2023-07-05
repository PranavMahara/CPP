#include<iostream>
using namespace std;

class Base{
    int a;
    public:
        int b;
        void setData(int k);
        int getData1();
};

void Base :: setData(int k){
    a = k;
}

int Base :: getData1(){
    return a;
}

class Derived : public Base{
    public:
        void inp(){
            cout<<"Enter the value of b: ";
            cin>>b;
        }
        void display(){
            cout<<"Value of a is "<<getData1()<<endl; 
            cout<<"Value of b is "<<b<<endl;
        }
};

int main(){
    Derived der;
    int p;
    cout<<"Enter the value of a: ";
    cin>>p;
    der.setData(p);
    der.inp();
    der.display();

    return 0;
}