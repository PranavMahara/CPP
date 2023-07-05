//  Program to find Largest among two numbers using function template

#include<iostream>
using namespace std;

template<typename T>
void maax(T a, T b){
    if(a>b){
        cout<<"a is greater"<<endl;
    }

    else{
        cout<<"b is greater"<<endl;
    }
}

int main(){
    int a = 4, b = 6;
    maax(a, b);

    char e = 'c', f = 'a';
    maax(e, f);

    float p = 4.5, q = 6.6;
    maax(p, q);

    return 0;
}