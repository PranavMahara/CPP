#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }

};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho? "<<endl;
        } 
};

class Derived : public Base1, public Base2{
    public:
        void greet(){
            Base1 :: greet();  // Base 2 :: greet() likhte toh base2 mein jo greet hai voh use hota!!
        }
};

int main(){
    Base1 p;
    p.greet();

    Base2 a;
    a.greet();

    Derived o;   // Ambiguity Resolved
    o.greet();
    return 0;
}