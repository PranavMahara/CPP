// Write a C++ program to check if an array of integers contains a 3 next to a 3 or a 5 next to a 5 or both.

// Sample Input:
// { 5, 5, 5, 5, 5 }
// { 1, 2, 3, 4 }
// { 3, 3, 5, 5, 5, 5}
// { 1, 5, 5, 7, 8, 10}
// Sample Output:
// 1
// 0
// 1
// 1

#include<iostream>
using namespace std;

int main(){
    int n, flag = 0;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value of element "<<i+1<<" --> ";
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        if(arr[i]==3){
            if(arr[i+1]==3){
                flag = 1;
                i++;
            }

            else{
                flag = 0;
            }
        }
        
        if(arr[i]==5){
            if(arr[i+1]==5){
                flag = 1;
                i++;
            }

            else{
                flag = 0;
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