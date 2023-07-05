// const Function Arguments

// We’ve seen that passing an argument by reference can be used to allow a function to modify a
// variable in the calling program. However, there are other reasons to pass by reference. One is
// efficiency. Some variables used for function arguments can be very large; a large structure
// would be an example. If an argument is large, passing by reference is more efficient because,
// behind the scenes, only an address is really passed, not the entire variable.
// Suppose you want to pass an argument by reference for efficiency, but not only do you want
// the function not to modify it, you want a guarantee that the function cannot modify it.
// To obtain such a guarantee, you can apply the const modifier to the variable in the function
// declaration. 

#include<iostream>
using namespace std;

void aFunc(int& a, const int& b);

int main(){
    int alpha = 7;
    int beta = 11;
    aFunc(alpha, beta);

    return 0;
}

void aFunc(int& a, const int& b){
    a = 107; 
    b = 111; 
}

// Now the attempt to modify the beta in aFunc() is flagged as an error by the compiler. One of
// the design philosophies in C++ is that it’s better for the compiler to find errors than to wait for
// them to surface at runtime. The use of const function arguments is an example of this
// approach in action.

// If you want to pass a const variable to a function as a reference argument, you don’t have a
// choice: It must be declared const in the function declaration. (There’s no problem passing a
// const argument by value, because the function can’t modify the original variable anyway.)   