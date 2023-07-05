#include<iostream>
using namespace std;

class Employee{  // Base Class

    public:
        Employee(){}; // default constructor
        int id;
        float salary;
        Employee(int inpID){
            id = inpID;
            salary = 34;
        }
};

// Derived class Syntax
/*
    class {{derived class name}} : {{visibility mode}} {{base class name}} {
        class members/methods etc
    }

*/
// Default visibility Mode is private
// Private visibility Mode --> Public Members of the base class becomes private members of the derived class
// Public visibility Mode --> Public Members of the base class becomes Public members of derived class
// Private members are never inherited
// base class ke public members hi inherit ho sakte hai

class Programmer : public Employee{ // public nahi lihoge toh default private banjeaga

    public:
        int language = 9;
        Programmer(int inpID){
            id = inpID;
        }
        void getData(){
            cout<<id<<endl;
        }
};


int main(){
    Employee arjun(1);
    cout<<arjun.salary<<endl;

    Programmer helloo(10);
    cout<<helloo.language<<endl;
    
    helloo.getData();
    cout<<helloo.id<<endl; // public hai bidu

    return 0;
}
