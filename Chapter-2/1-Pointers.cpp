#include<iostream>
using namespace std;

int main(){
    // POINTERS
    int a = 3;
    int *b = &a; // & is (address of) operator and * is deferencing operator or value at operator

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;

    // POINTER TO POINTER
    cout<<"------------------------------------------------------------\n";

    int **c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at, value at address c is "<<**c<<endl;

    return 0;
}