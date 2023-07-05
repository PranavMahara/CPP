// Write a program in C++ to print the first 20 numbers of the Pell series.

#include<iostream>
using namespace std;

int main(){
    int arr[20];

    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<20; i++){
        arr[i] = 2*arr[i-1]+arr[i-2];
    }

    for(int i=0; i<20; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}