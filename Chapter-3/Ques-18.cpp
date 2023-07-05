// Write a program for void pointer.

#include<iostream>
using namespace std;

int main(){
    void *ptr;
    float f = 2.3;
    int a = 12;
    char c = 'p';

    ptr = &a;
    cout<<"The content of pointer is ";
    cout<<*(static_cast<int*>(ptr))<<endl;

    ptr = &f;
    cout<<"The content of pointer is ";
    cout<<*(static_cast<float*>(ptr))<<endl;
    
    ptr = &c;
    cout<<"The content of pointer is ";
    cout<<*(static_cast<char*>(ptr));


    return 0;
}