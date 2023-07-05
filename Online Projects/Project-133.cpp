// Write a C++ program to create a new array containing the middle elements from the two given arrays of integers, each length 5.
// Sample Input:
// {0, 10, 20, 30, 40}
// {0, -10, -20, -30, -40}
// Sample Output:
// New array:
// 20 -20

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements --> ";
    cin>>n;

    int arr_1[n];
    int arr_2[n];

    cout<<"Enter elements for array -1 ";
    for(int i=0; i<n; i++){
        cin>>arr_1[i];
    }

    cout<<"Enter elements for array -2 ";
    for(int i=0; i<n; i++){
        cin>>arr_2[i];
    }

    int arr_3[2];
    arr_3[0] = arr_1[n/2];
    arr_3[1] = arr_2[n/2];

    for(int i=0; i<2; i++){
        cout<<arr_3[i]<<" ";
    }
    return 0;
}