// Write a C++ program to create a new array taking the first and last elements of a given array of integers 
// { 10, 20, -30, -40, 30 }
// Sample Output:
// New array:
// 10 30

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value of element "<<i+1<<" --> ";
        cin>>arr[i];
    }

    int new_arr[2];

    if(n>=2){
        new_arr[0] = arr[0];
        new_arr[1] = arr[n-1];

    cout<<"The first element of new array is "<<new_arr[0]<<" and last element is "<<new_arr[1]<<endl;
    }
    return 0;
}