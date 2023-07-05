#include <iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout << "Inside base class" << endl;
        }
};

class Child : public Parent{
    public:
        Child(){
            cout << "Inside sub class" << endl;
        }
};

int main(){
    Child obj;

    return 0;
}


// Whenever the derived class's default constructor is called, the base class's default constructor is called automatically. 
// To call the parameterized constructor of base class inside the parameterized constructor of sub class, we have to mention it explicitly.