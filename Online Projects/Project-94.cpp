// Write a program in C++ to check whether a given number is an ugly number or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    if((n==1)||(n%2==0 || n%3==0 || n%5==0) && (n%4!=0 && n%6!=0 && n%7!=0 && n%8!=0 && n%9!=0)){
        	cout<<n<<" is ugly";
    	}

    return 0;
}