// Write a C++ program to rearrange the elements of a given array of integers in zig-zag fashion way.
// Note: The format zig-zag array in form a < b > c < d > e < f.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(i%2==0){
            cout<<arr[i]<<" ";
        }
        
        else if(i%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}