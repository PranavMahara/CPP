#include<iostream>
using namespace std;

int main(){
    // char pt[50];
    // cout<<"Enter the string pt --> ";
    // cin>>pt;
    // cout<<"The string pt is "<<pt<<endl;

    // -------------------------------------------------------------

    // Case 1
    // char ptr[] = "Hello";
    // cout<<"The string ptr --> "<<ptr<<endl;

    // This will simply print "Hello" now see 2nd case

    // char *pt = "Hello";
    // cout<<"The string ptr --> "<<pt<<endl;

    // When you run this you will get an error 
    // We initialize pointers with string constants. But the compiler shows error and as the error explains itself, converting a string constant not allowed in C++. There is no extra explanation for this error because it is a rule of C++ and 
    // as we all know C++ is a very sensitive programming language as both “a” and “A” have different meanings along with memory allocation.

    // Solution --> use const before char

    const char *pt = "HELLO";
    cout<<"The string pt --> "<<pt<<endl;
    
    return 0;
}