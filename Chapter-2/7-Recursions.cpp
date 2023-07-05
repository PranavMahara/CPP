#include<iostream>
using namespace std;

int fac(int a){
    if(a==1 || a==0){
        return 1;
    }

    return a*fac(a-1);
    
}

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    cout<<"The factorial of "<<a<<" is "<<fac(a);
    return 0;
}
