// Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character.

#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    cout<<"The ASCII value of the character is "<<(int)c;
    return 0;
}