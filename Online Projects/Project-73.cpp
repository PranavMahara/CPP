// Write a C++ program to find and print all unique elements of a given array of integers. 
// check!

#include<iostream>
using namespace std;

int main(){
    int arr[100], freq[100];
    int size, i, j, count;

    cout<<"Enter size of array: ";
    cin>>size;


    for(i=0; i<size; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
        freq[i] = -1;
    }

    for(i=0; i<size; i++){
        count = 1;
            for(j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
            count++;
            freq[j] = 0;
            }
        }
            if(freq[i] != 0){
                freq[i] = count;
            }
    }

    for(i=0; i<size; i++){
        if(freq[i] = 1){
                cout<<freq[i]<<" occured a single time"<<endl;
        }
    }
    return 0;
}