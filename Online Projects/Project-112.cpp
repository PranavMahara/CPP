// Write a program in C++ to check if a number is Authomorphic or not.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int count = 0;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int k = n;

    while(n!=0){
        count++;
        n = n/10;
    }

    int square = k*k;

    cout<<"Square of the number is "<<square<<endl;

    int f = (int)(pow(10, count));
    int last =  square%f;

    if(last == k)
        cout<<k<<" is Automorphic";
    else
        cout<<k<<" is not Automorphic";
    return 0;
}