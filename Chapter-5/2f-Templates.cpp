#include<iostream>
using namespace std;

template<typename T>
class A{
    T a;

    public:
        A(T arg) : a(arg) {}

        void display(){
            cout<<"The input value of int is "<<a<<endl;
        }
};

template<>
class A <float>{
    float a;
    public:
        A(float arg) : a(arg) {}

        void display(){
            cout<<"The input value of float is "<<a<<endl;
        }
};

template<>
class A <char>{
    char a;
    public:
        A(char arg) : a(arg) {}

        void display(){
            cout<<"The input value of char is "<<a<<endl;
        }
};

int main(){
    A<int> Val_int(5);
    A<char> Val_char('C');
    A<float> Val_float(1.8);

    Val_int.display();
    Val_char.display();
    Val_float.display();
    return 0;
}