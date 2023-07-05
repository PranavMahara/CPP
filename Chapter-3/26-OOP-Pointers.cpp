#include<iostream>
using namespace std;

int main(){
    // Basics
    // int a = 4;
    // int *ptr = &a;
    // cout<<"The value of a is "<<*ptr<<endl;

    // New Keywords
    int *p = new int(40); // Similar for float and char
    cout<<"The value at address p is "<<*p<<endl;
    cout<<"The address p is "<<p<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20; // or *(arr+1)
    arr[2] = 30;

    cout<<"The value of arr[0] arr[1] arr[2] are"<<arr[0]<<arr[1]<<arr[2]<<endl;

    // Delete Opeartor

    int *arr_1 = new int[3];
    arr_1[0] = 10;
    arr_1[1] = 20;
    arr_1[2] = 30;
    delete[] arr_1;
    cout<<"The value of arr_1[0] arr_1[1] arr_1[2] are"<<arr_1[0]<<arr_1[1]<<arr_1[2]<<endl; // Garbage value aaegi aab
    return 0;
}