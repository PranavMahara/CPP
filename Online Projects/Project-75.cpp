//Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number. 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int k;
    cout<<"Enter a number: ";
    cin>>k;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i]+arr[j])==k){
                cout<<"Pairs --> "<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }

    return 0;
}