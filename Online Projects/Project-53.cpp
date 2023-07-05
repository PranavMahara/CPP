// Write a program in C++ to display the number in reverse order.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int rev;
    int remainder;

    while(n!=0){
        remainder = n%10;
        rev = rev*10 + remainder;
        n /= 10;
    }

    cout<<"The reverse number --> "<<rev;
    return 0;
}