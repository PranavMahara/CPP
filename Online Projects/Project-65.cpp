// Write a C++ program to update every array element by multiplication of next and previous values of a given array of integers.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value of element "<<i+1<<": ";
        cin>>arr[i];
    }

    cout<<"Element 1: "<<arr[0]*arr[1]<<endl;
    for(int i=1; i<(n-1); i++){
        cout<<"Element "<<i+1<<" is "<<arr[i-1]*arr[i+1]<<endl;
    }
    cout<<"Element "<<n<<" is "<<arr[n-1]*arr[n-2];
    
    return 0;
}
