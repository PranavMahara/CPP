#include<iostream>
using namespace std;

class Base{
    int data1;
    public:
        int data2;
        void setData(){
            data1 = 19;
            data2 = 91;
        }
        int getData1(){
            return data1;
        }
};

class Derived : private Base{  // Private
    public:
        void process(){
            setData();
        }
        void display(){
            cout<<"Value of data 1 is "<<getData1()<<endl; 
            cout<<"Value of data 2 is "<<data2<<endl;
        }

};

int main(){
    Derived der;
    der.process();
    der.display();
    return 0;
}