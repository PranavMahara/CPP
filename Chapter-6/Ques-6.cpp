// Write a program for using pointer and string.

#include <string.h>
#include <iostream>
using namespace std;

int main(){
    char str1[] = "Test";
    char *p1;
    p1 = &str1[0];
    cout << "Display str1 using the Array of characters:-" << endl;
    int len = strlen(str1);

    for (int i = 0; i < len; i++){
        cout << str1[i];
    }
    cout<< "Display the str1 value by using pointer : " << endl;
    for (int i = 0; i < len; i++){
        cout << *(p1 + i);
    }
    cout << endl;
    string str2 = "Pizza"; 
    string *ptr = &str2;   
    cout<<"Display the str2 value by using string variable : " << endl;

    cout << str2 << endl;
    cout << "Display the memory address of str2: " << endl;
    cout << &str2 << endl;
    cout << ptr << endl;
    return 0;
}