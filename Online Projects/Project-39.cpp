// C++ Program to find GCD

#include<iostream>
using namespace std;

int main(){
    int x, y, hcf;
    cout<<"Enter 2 numbers: ";
    cin>>x>>y;

    for(int i=1; i<=x; i++){
        if(x%i==0 && y%i==0){
            hcf = i;
        }
    }

    cout<<"The HCF is "<<hcf;
    return 0;
}
