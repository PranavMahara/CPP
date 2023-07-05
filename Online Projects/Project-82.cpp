// Write a C++ program to read seven numbers and sorts them in descending order.

#include<iostream>
using namespace std;

int main(){
    int arr[7];
    for(int i=0; i<7; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    int temp;
    for(int i=0; i<7; i++){             
        for(int j = i+1; j<7; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
   }

   for(int i=0; i<7; i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}