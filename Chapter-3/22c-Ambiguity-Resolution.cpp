#include<iostream>
using namespace std;

class B{   
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
        
};

class D : public B{   
    public:
        void say(){
            cout<<"Hello ATG here"<<endl;   // overwrite hogya
        }
        
};

class E : public D{
    
};

int main(){
    B b;
    b.say();

    D d;
    d.say();

    E e;
    e.say();
    return 0;
}