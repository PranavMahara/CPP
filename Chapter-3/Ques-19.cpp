// Write a program to create Pointer to Pointer variable

#include <iostream>
using namespace std;

int main(){
    int var;
    int *ptr;
    int **pptr;

    var = 3000;
    ptr = &var;
    pptr = &ptr;

    cout << "Value of var : " << var << endl;
    cout << "Value available at *ptr : " << *ptr << endl;
    cout << "Value available at **pptr : " << **pptr << endl;
    cout << "Address of var is : " << ptr << endl;
    cout << "Address of *ptr is : " << pptr << endl;
    return 0;
}
