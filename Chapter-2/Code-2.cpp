#include<iostream>
using namespace std;

int main(){
    // NOTE --> 

    char ptr[] = "ARJUN";
    ptr[2] = 'a'; // THIS IS ACCEPTABLE
    cout<<ptr<<endl;

    const char *pt = "ARJUN";
    // pt[2] = 'a'; // THIS IS NOT ACCEPTABLE
    cout<<pt<<endl;

    // ptr++; // YEH NI HOGA
    // pt++; // YEH HOJEGA

    return 0;
}