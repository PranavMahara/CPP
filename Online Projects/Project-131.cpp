// Write a C++ program to check a given array of integers of length 1 or more and return true if 10 appears as either first or last element in the given array.

// Sample Input:
// { 10, 20, 40, 50 }
// { 5, 20, 40, 10 }
// { 10, 20, 40, 10 }
// { 12, 24, 35, 55 }
// Sample Output:
// 1
// 1
// 1
// 0

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements --> ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements --> ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(arr[0]==10 || arr[n-1]==10){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
    return 0;
}