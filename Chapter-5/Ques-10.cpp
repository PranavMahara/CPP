// C++ Program to build Simple calculator using Class template

#include<iostream>
using namespace std;

template<typename T>
class Calculator{
    T num1, num2;

    public:
        Calculator(T p, T q) : num1(p), num2(q){}

        void display(){
                cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
                cout << "Addition is: " << Add() << endl;
                cout << "Subtraction is: " << Subtract() << endl;
                cout << "Product is: " << Multiply() << endl;
                cout << "Division is: " << Divide() << endl;
        }

        T Add(){ 
            return num1 + num2; 
        }
        
        T Subtract(){ 
            return num1 - num2; 
        }
        
        T Multiply(){ 
            return num1 * num2; 
        }
        
        T Divide(){ 
            return num1 / num2; 
        }
};

int main(){
    Calculator <int> a(1, 3);
    a.display();
    cout<<"-------------------------------"<<endl;
    Calculator <float> b(1.2, 3.4);
    b.display();
    return 0;
}