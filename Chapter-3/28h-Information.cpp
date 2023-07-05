// Pointers to Derived Classes: Pointers can be declared to derived class. it can be used to access
// members of base class and derived class. A base class pointer can also be used to point to object of derived 
// class but it can access only members that are inherited from base class.


#include<iostream>
using namespace std;

class base{
    public:
        int a;

        void get_a(int x){
            a=x;
        }

        void display_a(){
            cout<<"In base"<<" "<<"a = "<<a<<endl;
        }
};

class derived : public base{
    int b;

    public:
        void get_ab(int x,int y){
            a=x;
            b=y;
        }

        void display_ab(){
            cout<<"In Derived "<<" "<<"a = "<<a<<" b = "<<b<<endl;
        }
};

int main(){
    base b;
    base *bptr = &b;

    bptr->get_a(100);
    bptr->display_a();

    derived d;
    derived *dptr = &d;
    
    dptr->get_a(400);
    dptr->display_a();
    dptr->get_ab(300,200);
    dptr->display_ab();

    bptr = &d;//points to the object of derived class
    bptr->get_a(400);
    bptr->display_a();

    return 0;
}