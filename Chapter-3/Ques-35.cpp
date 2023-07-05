// Write a C++ program to demonstrate the concept of exception handling.

#include <iostream>
using namespace std;

int main(){
    cout << "Start"<<endl;

    try{
        cout << "Inside Try Block"<<endl;
        throw 100; 
        cout << "This will not execute";
    }

    catch (int i){
        cout << "Caught an Exception Value is: ";
        cout << i << endl;
    }

    cout << "End";
    
    return 0;
}
