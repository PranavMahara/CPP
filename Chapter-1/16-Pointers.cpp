#include<iostream>
using namespace std;

// int* func(){
//     int a = 10;
//     return &a;
// }

int* funca(){
    static int a = 120;
    return &a;
}

int main(){ 
    // int *p = func();
    // cout<<p<<" "<<*p<<endl;

    int *q = funca();
    cout<<q<<" "<<*q<<endl;

    return 0;
}