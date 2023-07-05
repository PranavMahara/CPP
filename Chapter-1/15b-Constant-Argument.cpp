// CONST ARGUMENT:-
// In C++, an argument to a function can be declared as unit as const as shown
// below.
// int strlen(const char *p);
// int length(const string &s);
// The qualifier const tells the compiler that the function should not modify the argument .the 
// compiler will generate an error when this condition is violated .This type of declaration is significant 
// only when we pass arguments by reference or pointers

#include<iostream>
#include<string.h>
using namespace std;

string change(string &a){
    string b;
    cout<<"Enter the string --> ";
    cin>>b;

    // a = b; // You can do this also
    a = a + b;
    return a;
}

int main(){
    string s;
    cout<<"Enter the string --> ";
    cin>>s;

    change(s);

    cout<<s;
    return 0;
}