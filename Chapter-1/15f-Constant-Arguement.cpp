#include<iostream>
#include<string.h>
using namespace std;

string change(const char *a){ // Now string wont change
    char b[50];
    cout<<"Enter the string --> ";
    cin>>b;

    strcpy(a, b);
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