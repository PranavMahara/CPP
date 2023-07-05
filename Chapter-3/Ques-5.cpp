// Write a program with a mother class and an inherited daugther class.
// Both of them should have a method void display ()that prints a message (different for mother and daugther).
// In the main define a daughter and call the display() method on it.

#include<iostream>
using namespace std;

class mother{
    public:
        void display(){
            cout<<"Hi, Mother this side";
        }

};

class daughter : public mother{
    public:
        void display(){
            cout<<"Hi, Daughter this side";
        }
};

int main(){
    daughter a;
    a.display();
    return 0;
}