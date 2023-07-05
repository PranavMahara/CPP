#include<iostream>
using namespace std;

class Base{
    int Data1;
    public:
        int Data2;
        void setData();
        int getData1();
        
};

void Base :: setData(){
    Data1 = 20;
    Data2 = 68;
}

int Base :: getData1(){
    return Data1;
}

class Derived : public Base{
    int Data3;
    public:
        void process(){
            Data3 = Data2*getData1();
        }

        void display(){
            cout<<"Value of data 1 is "<<getData1()<<endl; // data1 private hai isliye functions ke through kiya hai
            cout<<"Value of data 2 is "<<Data2<<endl;
            cout<<"Value of data 3 is "<<Data3<<endl;
        }
};

int main(){
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}