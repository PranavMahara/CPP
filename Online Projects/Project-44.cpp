// Write a program in C++ to find the sum of series 1 + X^2/2! + X^4/4!-.... upto nth term.

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;

    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    int sum = 0;
    for(int i=1; i<=n; i++){
        int pro = 1;
        for(int a = 1; a<=2*i; a++){
            pro = pro*a;
        }
        sum = sum + pow(x, 2*i)/pro;
    }
    return 0;
}