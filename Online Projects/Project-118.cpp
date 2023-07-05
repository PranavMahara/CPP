// Write a program in C++ to generate Mersenne primes within a range of numbers.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the range a(lowest) and b(highest): ";
    cin>>a>>b;
    
    for(a; a<b; a++){
        for(int i=0; i<100; i++){
            if(pow(2, i)==a+1){
                cout<<a<<" ";
            }
        }
    }
    return 0;
}