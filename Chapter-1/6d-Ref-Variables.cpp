#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int &y = x;

    cout<<"The value of y is "<<y<<endl;
    y++; // Increase ho jaega
    cout<<"The value of y is "<<y<<endl;

    x = 6;
    cout<<"The value of y is "<<y<<endl;
    return 0;
}

/*

Reference and De-Reference Operators --> 

Reference operators:
Address of operator (“&”) is known as referencing operator.
This operator returns the address of the variable associated with the operator.
For e.g., if we write “&x”, it will return the address of the variable “x’.
Hence, if we have a pointer “p”, which we want to point to a variable x, then we need to copy the address of the variable “x” in the pointer variable “p”.
This is implemented by the statement: p = &x;

Dereference operators:
Value of operator (“*”) is known as dereference operator.
This operator returns the value stored in the variable pointed by the specified pointer.
For e.g., if we write “*p”, it will return the value of the variable pointed by the pointer “p”.
Hence, if we want the value of the variable pointed by the pointer “p” to be stored in a variable “y”, then the expression can be written as: y = *p;

*/

