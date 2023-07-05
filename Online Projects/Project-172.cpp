// finding digits shortcut

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int digits = (int)log10(n)+1;

    cout<<"Number of digits are "<<digits;
    return 0;
}