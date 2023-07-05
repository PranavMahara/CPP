#include<iostream>
using namespace std;

class complex{
    int a, b;

    public:
        complex(){}
        complex(int p, int q) : a(p), b(q){}

        complex operator + (complex obj){
            complex t;
            t.a = a + obj.a;
            t.b = b + obj.b;

            return t;
        }

        complex operator - (complex obj){
            complex t;
            t.a = a - obj.a;
            t.b = b - obj.b;

            return t;
        }

        void display(){
            cout << a << "+" << b << "i" << endl;
        }
};

int main(){
    complex obj1(1, 2), obj2(2, 3), result,r2;
    result = obj1 + obj2;
    r2 = obj2 - obj1;


    result.display();
    r2.display();
    return 0;
}