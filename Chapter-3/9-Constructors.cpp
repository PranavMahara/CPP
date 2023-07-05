#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex();

        void PrintNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex :: Complex(){
    a = 10;
    b = 30;
    cout<<"YOYO";
}

int main(){
    Complex c, e;
    c.PrintNumber();
    e.PrintNumber();
    return 0;
}

// CHaracteristics of Constructor

// 1. It should be declared in the public section of the class
// 2. They are automaticaly invoked whenver the object is created
// 3. They cannot return values and they dont have return types
// 4. It can have default arguements
// 5. We cannot refer to address
