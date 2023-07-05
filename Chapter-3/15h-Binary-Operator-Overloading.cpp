#include <iostream>
using namespace std;

class Complex{
    private:
        float real;
        float imag;

    public:
        Complex() : real(0), imag(0) {}

        void input(){
            cout << "Enter real and imaginary parts respectively: ";
            cin >> real;
            cin >> imag;
        }

        Complex operator+(const Complex &obj){
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        void output(){
            if (imag < 0){
                cout << "Output Complex number: " << real << imag << "i";
            }
            else{
                cout << "Output Complex number: " << real << "+" << imag << "i";
            }
        }
};

int main(){
    Complex complex1, complex2, result;

    cout << "Enter first complex number: ";
    complex1.input();

    cout << "Enter second complex number: ";
    complex2.input();
    result = complex1 + complex2;
    result.output();

    return 0;
}

// using & makes our code efficient by referencing the complex2 object instead of making a duplicate object inside the operator function.
// using const is considered a good practice because it prevents the operator function from modifying complex2.