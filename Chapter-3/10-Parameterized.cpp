#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(int x, int y){
            a = x;
            b = y;
        }

        void PrintNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    Complex c(4, 6); // Implicit Call
    Complex j = Complex(4, 6); // Explicit Call
    c.PrintNumber();
    j.PrintNumber();
    return 0;
}
