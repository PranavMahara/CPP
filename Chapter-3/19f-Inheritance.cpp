#include<iostream>
using namespace std;

class A{
    protected:
        int a, b;
    
    public:
        void SetData(int x, int y){
            a = x;
            b = y;
        }
};

class B : public A{
    public:
        int c;
        void Sum(){
            c = a+b;
            cout<<c<<endl;
        }
};

class C : public B{
    public:
        int d;
        void Product(){
            d = a*b;
            cout<<d<<endl;
        }
};

int main(){
    C p;
    p.SetData(5, 7);    
    p.Product();

    return 0;
}