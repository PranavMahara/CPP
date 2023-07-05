#include<iostream>
using namespace std;

class Complex; // Forward Declaration
class Calculator{
    public:
        int SumReal(Complex , Complex);     
        int SumCom(Complex , Complex);     
};

class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout<<"Number is "<<a<<" + "<<b<<"i"<<endl;
        }
    // Individually declaring friends
    friend int Calculator :: SumReal(Complex, Complex);
    friend int Calculator :: SumCom(Complex, Complex);
    // Declaring whole class as friend
    // friend class Calculator     <-- Like this
};

int Calculator :: SumReal(Complex o1, Complex o2){
    return o1.a+o2.a;
}

int Calculator :: SumCom(Complex o1, Complex o2){
    return o1.b+o2.b;
}

int main(){
    Complex o1, o2;
    o1.setNumber(1, 3);
    o2.setNumber(7, 4);

    Calculator calc;
    cout<<"The sum of real part of o1 and o2 is "<<calc.SumReal(o1, o2)<<endl;
    cout<<"The sum of complex part of o1 and o2 is "<<calc.SumCom(o1, o2)<<endl;

    return 0;
}