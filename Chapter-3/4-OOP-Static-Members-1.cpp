// A static variable acts as a global variable and is shared among all the objects of the class. A non-static variables are specific to instance object in which they are created.
#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(){
            cout<<"Enter ID --> ";
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"The ID of the employee is "<<id<<" and employee number is "<<count<<endl;
        }
};
int Employee :: count; // By default initialized as zero // If u want to initialize it as any number like say 1000 just write int Employee :: count = 1000;

int main(){
    Employee Arjun, Karan, Sanya;
    Arjun.setData();
    Arjun.getData();

    Karan.setData();
    Karan.getData();
    
    Sanya.setData();
    Sanya.getData();

    return 0;
}

// Inside Class Definition: 
// When a member function is defined inside a class, we do not require to place a 
// membership label along with the function name. We use only small functions inside the class 
// definition and such functions are known as inline functions. 
//  In case of inline function the compiler inserts the code of the body of the function at 
// the place where it is invoked (called) and in doing so the program execution is faster but 
// memory penalty is there. 