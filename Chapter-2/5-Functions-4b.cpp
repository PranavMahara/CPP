// Why use return by Ref
// One reason is to avoid copying a large object
// Another reason is to allow you to use a function call on the left side of the equal sign.

#include <iostream>
using namespace std;
int x; 

int& setx(); 

int main(){
    setx() = 92; 
    cout << "x = " << x << endl; 

    return 0;
}

int& setx(){
    return x; 
}

// In this program the function setx() is declared with a reference type, int&, as the return type:
// int& setx();
// This function contains the statement
// return x;
// where x has been defined as a global variable. Now—and this is what looks so strange—you
// can put a call to this function on the left side of the equal sign:
// setx() = 92;
// The result is that the variable returned by the function is assigned the value on the right side of
// the equal sign. That is, x is given the value 92. The output from the program
// x=92
// verifies that this assignment has taken place.

// There are two corollaries . One is that you can’t return a constant from a function that
// returns by reference. In setx(), you can’t say

// int& setx() {
//      return 3;
// }

// If you try this the compiler will complain that you need an lvalue, that is, something that can
// go on the left side of the equal sign: a variable and not a constant.
// More subtly, you can’t return a reference to a local variable:

// int& setx() {
//      int x = 3;
//      return x; // error
// }

// What’s wrong with this? The problem is that a function’s local variables are probably
// destroyed when the function returns, and it doesn’t make sense to return a reference to something that no longer exists.