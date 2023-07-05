// Write a C++ program to find the largest element of a given array of integers.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];
    int max = arr[0];

    for(int i=0; i<n; i++){
        cout<<"Enter the value of element "<<i+1<<": ";
        cin>>arr[i];
    }
    

    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    cout<<"The largest element in the array is: "<<max;
    return 0;
}