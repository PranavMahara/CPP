// Write a program in C++ to display the first 10 Lucus numbers.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];

    arr[0] = 2;
    arr[1] = 1;

    for(int i=2; i<n; i++){
       arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
