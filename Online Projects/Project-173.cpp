// Write a C++ program to reverse a given string. 

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);

    cout<<"The reversed string is ";
    for(int i=s.size(); i>=0; i--){
        cout<<s[i];
    }
    return 0;
}