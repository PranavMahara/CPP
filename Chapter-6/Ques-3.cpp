// Write a program to create a Pointer and Array

#include<iostream>
using namespace std;

int main(){
    int var[] = {1, 2, 3};
    int *ptr = &var[0];

    for(int i=0; i<3; i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    return 0;
}