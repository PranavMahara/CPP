#include<iostream>
using namespace std;
int sum(int x, int y){   //Function Prototype // int sum(int, int){  --> Also Acceptable
    int c = x + y;
    return c;
}
void hello(){
    cout<<"Hello cruel World";
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    cout<<"The value "<<a<<" + "<<b<<" is "<<sum(a, b)<<endl;
    hello();
    return 0;
}

// Functions is a group of instructions that is going to perform some task
// return-type can be int, float, char, string, user-defined