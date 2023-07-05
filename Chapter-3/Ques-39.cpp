// Write a program in C++ to define class complex having two data members viz real and imaginary part.

#include <iostream>
using namespace std;

class complex{
    private:
        float real, imaginary;

    public:
        void getdata(){
            real = 3.5;
            imaginary = 7.5;
        }
        void putdata(){
            cout << real << " +i" << imaginary;
        }
};

int main(){
    complex c;
    c.getdata();
    c.putdata();
    return 0;
}