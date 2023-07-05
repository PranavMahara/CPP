#include<iostream>
using namespace std;

// syntax for multiple inheritance

/*
class Derived : visibility mode base 1, visibility mode base 2{
    Class body of class "Derived"
};

*/

class Base1{
    protected:
        int base1int;

    public:
        void set_base1int(int a){
            base1int = a;
        }  
};

class Base2{
    protected:
        int base2int;

    public:
        void set_base2int(int a){
            base2int = a;
        }  
};

class Derived : public Base1, public Base2{

    public:
        void show(){
            cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The sum of both is "<<base1int+base2int<<endl;
        }
        // Data Members
        // base1int --> protected
        // base2int --> protected

        // Member Functions
        // set_base1int() --> public
        // set_base2int() --> public
        // show() --> public

};

int main(){
    Derived arjun;
    arjun.set_base1int(25);
    arjun.set_base2int(5);
    arjun.show();
    
    return 0;
}