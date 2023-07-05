#include<iostream>
using namespace std;

/*

Syntax for intialization list in constructor:

constructor(arguement-list) : initialization-section


E.g.

    class Test{
        int a;
        int b;
        public:
            Test(int i, int j) : a(i), b(j){   // a ko value mil jaegi i ki and b ko value mil jaegi j ki
                (constructor body)
            }
    };

*/

class Test{
        int a;
        int b;
        public:
            // Test(int i, int j) : a(i), b(j){  // i ke jaga i+j, 2*i, kuch bhi aa sakta hai , integer bhi aasakta hai
            // Test(int i, int j) : a(i), b(a+j){ 
            // Test(int i, int j) : a(b+i), b(j){ // Error even if it was b(j), a(b+i) then also error would have come as 'a' is initialized first, b(j), a(b+i) this will run great if you write int b first above instead of int a
            Test(int i, int j) : a(i), b(a+j){ 
                cout<<"Constructor executed"<<endl;
                cout<<"Value of a is "<<a<<" and b is "<<b<<endl;
            }
    };



int main(){
    Test hell(2, 4);
    return 0;
}