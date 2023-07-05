// Write a C++ program to check if a given array of integers contains 5 next to a 5 somewhere.
// Sample Input:
// { 1, 5, 6, 9, 10, 17 }
// { 1, 5, 5, 9, 10, 17 }
// { 1, 5, 5, 9, 10, 17, 5, 5 }
// Sample Output:
// 0
// 1
// 1

#include<iostream>
using namespace std;

int main(){
    int n, flag;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value of element "<<i+1<<" --> ";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]==5){
            for(int j=i+1; j<n; j++){
                if(arr[j]==5){
                    flag = 1;
                    break;
                }
            }
        }
    }

    if(flag==1){
        cout<<1<<endl;
    }

    else{
        cout<<0<<endl;
    }
    return 0;
}