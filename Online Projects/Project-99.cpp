// Write a program in C++ to generate random integers in a specific range.

#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    int num;
	srand(time(0));
	num = (rand() %	(b - a + 1)) + a;

    cout<<"The random number generated between "<<a<<" and "<<b<<" is "<<num<<endl;
    return 0;
}