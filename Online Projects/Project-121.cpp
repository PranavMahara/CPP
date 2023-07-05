// Write a program in C++ to check hamming number

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if((pow(2, i)*pow(3, j)*pow(5, k)) == n){
                    cout<<"The number is hamming";
                }
            }
        }
    }
    return 0;
}