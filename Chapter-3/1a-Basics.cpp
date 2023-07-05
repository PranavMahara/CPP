/*
Class is the collection of different data and function together (encapsulation)
Encapsulation is defined as the wrapping up of data under a single unit. 
It is the mechanism that binds together code and the data it manipulates. 
Another way to think about encapsulation is, it is a protective shield that prevents the data from being accessed by the code outside this shield.


Hiding unwanted data and show only accessary details (Abstraction)
In simple terms, abstraction “displays” only the relevant attributes of objects and “hides” the unnecessary details. 
For example, when we are driving a car, we are only concerned about driving the car like start/stop the car, accelerate/ break, etc.
*/

#include<iostream>
using namespace std;


class Employee{
    private:
        int a, b, c;
    
    public:
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData(){
            // cout<<"The value of a is "<<a<<endl;
            // cout<<"The value of b is "<<b<<endl;
            // cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }

    
};

void Employee :: setData(int a1, int b1, int c1){
    cout<<"The value of a is "<<a1<<endl;
    cout<<"The value of b is "<<b1<<endl;
    cout<<"The value of c is "<<c1<<endl;
}

int main(){
    Employee arjun; // arjun is an object now
    // arjun.a = 456; will give an error since 'a' is private it wont change
    arjun.d = 34;
    arjun.e = 37;
    arjun.setData(1, 2, 4);
    arjun.getData();

    return 0;
}