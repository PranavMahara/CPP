// Write a C++ program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.

#include<iostream>
using namespace std;

bool test(int nums[], int arr_length){
        	
    for (int i = 0; i < arr_length; i++){
        if (nums[i] == 1 && nums[i + 1] == 2 && nums[i + 2] == 3)
            return true;
        }
    return false;
}
        
int main(){
    int len;
    cout<<"Enter the length of the Array --> ";
    cin>>len;

    int arr[len];
    for(int i=0; i<len; i++){
        cin>>arr[i];
    }

    cout<<test(arr, len);
    return 0;    
}