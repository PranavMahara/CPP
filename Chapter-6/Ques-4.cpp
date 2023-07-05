// Write a program to create Virtual Function

#include<iostream>
using namespace std;

class base{
    public:
        virtual void print(){
            cout<<"Print Base Class"<<endl;
        }

        void show(){
            cout<<"Show Base Class"<<endl;
        }
};

class derived : public base{
    public:
        void print(){
            cout<<"Print derived class"<<endl;
        }

        void show(){
            cout<<"Show derived class"<<endl;
        }
};

int main(){
    base *pt;
    derived f;
    pt = &f;
    pt->print();
    pt->show();
    
    return 0;
}