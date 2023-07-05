#include<iostream>
using namespace std;

void RefPass(int a){
    cout<<"The value of a is "<<a<<endl;
    // cout<<"The address of a is "<<&a<<endl;
}

int main(){
    int x = 5;
    cout<<"The value of x is "<<x<<endl;
    // cout<<"The address of x is "<<&x<<endl;

    RefPass(x);
    return 0;
}