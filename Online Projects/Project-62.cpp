// Write a C++ program to find the second smallest elements in a given array of integers.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value of element "<<i+1<<": ";
        cin>>arr[i];
    }
    
    int temp;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"The 2nd smallest element in the array are: "<<arr[1];
    return 0;
}