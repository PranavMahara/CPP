#include<iostream>
using namespace std;
int c = 45; // here c is global variable

int main(){
    // int c;
    // cout<<"Enter the value of c: ";
    // cin>>c; // This c is local variable
    
    cout<<"The value of c(local): "<<c<<endl;
    cout<<"The value of c(global): "<<::c<<endl; // :: is used for the purpose and it is called scope resolution operator
    
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;   // by default decimal is treated as double
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl; // we use f or F to make double to float
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl; // l or L is for LONG
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;


    // ---------------------------------------------
    // REFERENCE VARIABLE
    // When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration. 
    int x = 50;
    int &y = x;  // y is reference variable of x
    cout<<x<<endl;
    cout<<y<<endl;

    // Typecasting ways:
    // int(a)     or     (int)a         BOTH WORKS

    float k = 8.46;
    int d = 4;

    int s = int(k);

    cout<<"The sum is "<<s+d;
    return 0;
}

// Global and Static Variable
// A local static variable is created once and the method will go out of scope, but the static variable is not destroyed and it will live in memory until the program ends. 
// A global static variable live in memory until the program ends.

// Global and Static Variable
// Variables are classified into Global variables and Local variables based on their scope. The main difference between Global and local variables is that global variables can be accessed globally in the entire program, 
// whereas local variables can be accessed only within the function or block in which they are defined.