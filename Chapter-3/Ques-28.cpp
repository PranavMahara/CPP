// Write a program to demonstrate the use of pointer to a function.

#include<iostream>
#include<string.h>
using namespace std;

void check(char *a, char *b, int (*cmp)(const char *, const char *)){
    cout<<"TESTING FOR EQUALITY"<<endl;
    if(!((*cmp)(a, b))){
        cout<<"EQUAL"<<endl;
    }
}

int main(){
    char s1[80], s2[80];
    int (*p)(const char*, const char *);
    p = strcmp;

    gets(s1);
    gets(s2);

    check(s1, s2, p);

    return 0;
}