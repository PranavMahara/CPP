#include<iostream>
#include<string.h>
using namespace std;

string change(string a){ 
    char b[50];
    cout<<"Enter the string --> ";
    cin>>b;

    a = a + b;
    return a;
}

int main(){
    char s[50];
    cout<<"Enter the string --> ";
    cin>>s;

    change(s);
    cout<<s;
    return 0;
}