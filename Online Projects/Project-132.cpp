// Write a C++ program to reverse a given array of integers and length 5. 

#include<iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i=0; i<5; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int temp;
    for(int i=0; i<5/2; i++){
        temp = arr[i];
        arr[i] = arr[5-i-1];
        arr[5-i-1] = temp;
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}