// NEED FOR DEFAULT CONSTRUCTOR

#include<iostream>
using namespace std;

class X{
    public:
        X(); // Yeh nhi daloge toh error aaega // U can remoxe X p in main path as it is the main cause of the error
        X(int a){
            cout<<"Hello";
        }

};

int main(){
    X p;
    X a(5); // Whats the need for default constructor
    // Suppose we make an object and we dont fill values there then error will come so the compiler says that we need to make a default
    // constructor in case the make has nothing
    return 0;
}