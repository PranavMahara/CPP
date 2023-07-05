//  Write a program in C++ to convert a binary number to decimal number.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cout<<"Enter a number: ";
    cin>>n;


    for(int i=0; n!=0; i++){
        int k = n%10;
        sum = sum + (int)k*pow(2, i);
        n = n/10;
    }

    cout<<"Decimal Number --> "<<sum<<endl;
    
    return 0;
}