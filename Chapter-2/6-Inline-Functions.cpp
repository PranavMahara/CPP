// We use functions and we call them 
// like this
// #include<iostream>
// using namespace std;

// int pro(int a, int b){
//     return a*b;
// }

// int main(){
//     int a, b;
//     cout<<"Enter a and b: ";
//     cin>>a>>b;

//     cout<<"The product of a and b is "<<pro(a, b)<<endl;
//     cout<<"The product of a and b is "<<pro(a, b)<<endl;
//     cout<<"The product of a and b is "<<pro(a, b)<<endl;
//     cout<<"The product of a and b is "<<pro(a, b)<<endl;
//     cout<<"The product of a and b is "<<pro(a, b)<<endl;
//     cout<<"The product of a and b is "<<pro(a, b)<<endl;
//     cout<<"The product of a and b is "<<pro(a, b)<<endl;
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------
// This takes a lot of time as it goes first from pro(a, b) to function int then return and then repeat for a number of functions
// we use inline for such cases
// inline replaces function call with function code
// NO CHANGE IN OUTPUT

#include<iostream>
using namespace std;

inline int pro(int a, int b){  // for inline functions we write inline in the beginning
    return a*b;
}

int main(){
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"The product of a and b is "<<pro(a, b)<<endl;
    cout<<"The product of a and b is "<<pro(a, b)<<endl;
    cout<<"The product of a and b is "<<pro(a, b)<<endl;
    cout<<"The product of a and b is "<<pro(a, b)<<endl;
    cout<<"The product of a and b is "<<pro(a, b)<<endl;
    cout<<"The product of a and b is "<<pro(a, b)<<endl;
    cout<<"The product of a and b is "<<pro(a, b)<<endl;
    return 0;
}

// remember we use inline only for those cases in which function code is small
// otherwise if we use normal functions then code will eat a lot of memory !!!!! 
// never use inline functions for static and recursion
// Compiler can ignore the request for inline!! for better optimization


// These are the functions designed to speed up program execution. An inline function is 
// expanded (i.e. the function code is replaced when a call to the inline function is made) in the line 
// where it is invoked. You are familiar with the fact that in case of normal functions, the compiler 
// have to jump to another location for the execution of the function and then the control is 
// returned back to the instruction immediately after the function call statement. So execution time 
// taken is more in case of normal functions. There is a memory penalty in the case of an inline 
// function. 

// The inlining does not work for the following situations : 
//      1. For functions returning values and having a loop or a switch or a goto 
//          statement. 
//      2. For functions that do not return value and having a return statement. 
//      3. For functions having static variable(s). 
//      4. If the inline functions are recursive (i.e. a function defined in terms of itself). 

// The benefits of inline functions are as follows : 
// 1. Better than a macro. 
//      2. Function call overheads are eliminated. 
//      3. Program becomes more readable. 
//      4. Program executes more efficiently. 


/*
Long sections of repeated code are generally better off as normal functions: The savings in
memory space is worth the comparatively small sacrifice in execution speed. But making a
short section of code into an ordinary function may result in little savings in memory space,
while imposing just as much time penalty as a larger function. In fact, if a function is very
short, the instructions necessary to call it may take up as much space as the instructions within
the function body, so that there is not only a time penalty but a space penalty as well.
In such cases you could simply repeat the necessary code in your program, inserting the same
group of statements wherever it was needed. The trouble with repeatedly inserting the same
code is that you lose the benefits of program organization and clarity that come with using
functions. The program may run faster and take less space, but the listing is longer and more
complex.
The solution to this quandary is the inline function. This kind of function is written like a normal function in the source file but compiles into inline code instead of into a function. The
source file remains well organized and easy to read, since the function is shown as a separate
entity. However, when the program is compiled, the function body is actually inserted into the
program wherever a function call occurs.
*/