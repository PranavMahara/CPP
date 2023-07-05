#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor!!

        Number(Number &obj){
            cout<<"Copy constructor called!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number is "<<a<<endl;
        }

};

int main(){
    Number x, y, z(45);
    x.display();
    // y.display();
    // z.display();

    Number z1(x);
    z1.display();
    // z2 = z  // Copy Constructor not invoked!
    Number z2(z); // or Number z2 = z // Copy Constructor Invoked
    z2.display();
    // z1 should exactly resemble as z or x or y
    return 0;
}