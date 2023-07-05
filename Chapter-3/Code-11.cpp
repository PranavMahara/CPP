// Printing repeated elements

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array --> ";
    cin>>n;

    int arr[n];
    int freq[n];

    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
        freq[i] = -1;
    }

    for(int i=0; i<n; i++){
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j] = 0;
            }

            if(freq[i]!=0){
                freq[i] = count;
            }
        }
    }

    cout<<"Duplicate elements --> ";
    for(int i=0; i<n; i++){
        if(freq[i]>1){
            cout<<arr[i]<<", ";
        }
    }

    return 0;
}