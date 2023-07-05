// Write a program in C++ to display first 10 Fermat numbers.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number upto which u want to print Fermat Number: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<(int)(pow(2, pow(2, i))+1)<<" ";
    }
    return 0;
}