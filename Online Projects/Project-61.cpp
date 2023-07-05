// Write a C++ program to find the largest three elements in an array.

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
            if(arr[j]>arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"The largest element in the array are: "<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}