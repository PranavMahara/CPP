#include<iostream>
using namespace std;
class A{
    protected:
        int a;
    public:
        void val_a(){
            a = 4;
        }
};

class B{
    private:
        int b;
    public:
        void show(){
            b = 4;
        }
};

class C : public A{
    public:
        void change(){
            a = 5;
        }
};

class D : public B{
    public:
        void change(){
            // b = 5; // This will not change as b is private
        }
};

class E : public C{
    public:
        void cha(){
            a = 6;
            cout<<a;
        }

};

int main(){
    E chaa;
    chaa.cha();
    return 0;
}