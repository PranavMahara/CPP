//  Write a program in C++ to Check if a number is Mersenne number or not.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    
    for(int i = 0; i<100; i++){
        if(pow(2, i)==x+1){
            cout<<"It is Mersenne Number";
        }
    }
    return 0;
}