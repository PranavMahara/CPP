// Write a C++ program to move all negative elements of an array of integers to the end of the array without changing the order of positive element and negative element.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value of element "<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            cout<<arr[i]<<endl;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}