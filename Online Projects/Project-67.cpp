// Write a C++ program to count the number of occurrences of given number in a sorted array of integers.

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

    cout<<"Frequency of all elements of array: \n";

    for(i=0; i<size; i++){
        if(freq[i] != 0){
                cout<<arr[i]<<" occurs "<<freq[i]<<" times \n";
        }
    }
    return 0;
}