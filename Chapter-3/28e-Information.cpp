// Program to find sum of list of integers, Simply sum of array elements

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int *p = new int[n];
    cout<<"Enter list of integers"<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        sum=sum+p[i];
    }

    cout<<"Sum of array elements is "<<sum<<endl;
    delete [ ]p;
    
    return 0;
}