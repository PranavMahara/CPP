// Write a C++ program to sort a given unsorted array of integers, in wave form

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(i%2==0){
            cout<<arr[i]<<endl;
        }
        else{
            cout<<"  "<<arr[i]<<endl;
        }
    }
    return 0;
}