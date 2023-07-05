// all possible types of exceptions and therefore may not be able to design independent catch handlers to
// catch them. In such circumstances, we can force a catch statement to catch all exceptions instead of a
// certain type alone.
// Write a Program to catch all exceptions
#include <iostream>
using namespace std;

void test(int x){
    try{
        if (x == 0){
            throw x;
        }
        
        if (x == 1){
            throw 'x';
        }
        
        if (x == -1){
            throw 1.0;
        }
    }

    catch (...){
        cout << "caught exception" << endl;
    }
}

int main(){

    test(-1);
    test(0);
    test(1);
    
    return 0;
}