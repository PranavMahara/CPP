// Show how constructors work for derived classes

#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"The Base Constructor has been called off!"<<endl;
        }
};

class Derived : public Base{
    public:
        Derived(){
            cout<<"The Derived Constructor has been called off!"<<endl;
        }
};

int main(){
    Derived d;  // If we make an object of Derived class so firstly the constructor is called from base class 
                // then constructor of derived class comes into action
    return 0;
}