#include <iostream>
using namespace std;

class Parent1{
    public:
        Parent1(){
            cout << "Inside first base class" << endl;
        }
};

class Parent2{
    public:
        Parent2(){
            cout << "Inside second base class" << endl;
        }
};

class Child : public Parent1, public Parent2{
    public:
        Child(){
            cout << "Inside child class" << endl;
        }
};

class SecChild : public Parent2, public Parent1{
    public:
        SecChild(){
            cout << "Inside child class - 2" << endl;
        }
};

int main(){
    Child obj1;
    cout<<"-------------------------"<<endl;
    SecChild obj;
    return 0;
}