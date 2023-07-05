#include <iostream>
#include <conio.h>
using namespace std;

class baseA{
    public:
        virtual void display(){
            cout<< "One"<<endl;
        }
};

class derivedB : public baseA{
    public:
        virtual void display(){
            cout<<"Two"<<endl;
        }
};

class derivedC : public derivedB{
    public:
        virtual void display(){
            cout << "Three"<<endl;
        }
};

void main()
{
    // define three objects
    baseA obja;
    derivedB objb;
    derivedC objc;
    baseA *ptr[3]; // define an array of pointers to baseA
    ptr[0] = &obja;
    ptr[1] = &objb;
    ptr[2] = &objc;
    for (int i = 0; i <= 2; i++){
        ptr[i]->display(); // same message for all objects
    }
    getche();
}
