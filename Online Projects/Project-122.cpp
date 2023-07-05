// Write a program in C++ to check if a number is Keith or not.
// error!

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int k = n;
    int p = n;
    int arr[1000];
    int count = 0;
    while(n!=0){
        count++;
        n = n/10;
    }

    for(int i=0; i<count; i++){
        arr[i] = k%10;
        k = k/10;
    }

    for(int i=count; i<1000; i++){
        arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
    }

    for(int i=0; i<1000; i++){
        if(p==arr[i]){
            cout<<"Yes it is a keith Number";
        }
        else{
            cout<<"No it is not!";
        }
    }

    return 0;
}