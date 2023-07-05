// Write a program in C++ to check whether a given number is Abundant or not. 

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cout<<"Enter a number --> ";
    cin>>n;

    for(int i=1; i<n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }

    if(sum>n){
        cout<<"The number is abundant"<<endl;
    }
    
    else{
        cout<<"The number is not abundant"<<endl;
    }
    return 0;
}