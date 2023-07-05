#include<iostream>
using namespace std;

int main(){
    const char *pt = "arjun";
    // char pt[] = "arjun";
    cout<<*&*&*pt<<endl;

    pt++;
    cout<<*&*&*pt<<endl;

    int a = 67;
    int *ptr = &a;
    cout<<*&*&*ptr<<endl;

    return 0;
}