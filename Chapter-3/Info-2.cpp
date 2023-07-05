// Late Binding
// As we studied in the earlier unit, late binding means selecting functions during the execution. 
// Though late binding requires some overhead it provides increased power and flexibility. The late 
// binding is implemented through virtual functions as a result we have to declare an object of a class 
// either as a pointer to a class or a reference to a class.

#include<iostream>
using namespace std;

class base { 
    private :
        int x;
        float y;
        public:
        virtual void display ( ) ;
        int sum ( ) ;
};

class derivedD : public base{
    private :
        int x ;
        float y;
        public:
        void display ( ); //virtual
        int sum ( ) ;
};

int main(){
    base *ptr ;
    derivedD objd ;
    ptr = &objd ;
    // Other Program statements
    ptr->display(); //run time binding
    ptr->sum(); //compile time binding
    return 0;
}