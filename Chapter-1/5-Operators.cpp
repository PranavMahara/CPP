#include<iostream>
using namespace std;

int main(){
    cout<<"Operators in C++:"<<endl; // endl so next line shuru hojaye
    int a = 4;
    int b = 5;
    // Arithmetic Operators
    // cout<<"The value of a+b is "<<a+b<<endl;
    // cout<<"The value of a-b is "<<a-b<<endl;
    // cout<<"The value of a*b is "<<a*b<<endl;
    // cout<<"The value of a/b is "<<a/b<<endl;
    // cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    cout<<"----------------------------------\n";
    // Assignment Operators (Used to assign values to variables)
    // int, float , char

    // Comparison Operators //0 if false and 1 if true
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;

    // Logical Operators
    // &&, ||

     cout<<"The value of a==b && a>=b is "<<((a==b) && (a>=b))<<endl;
     // similarly for 'or' operator
    return 0;
}