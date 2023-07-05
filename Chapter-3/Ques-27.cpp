//  Write a program to demonstrate the array indexing using pointers.

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int x[5] = {1, 4, 2, 5, 3};

    int i=0;
    int *p = x;
    while(i<5){
        cout<<*p<<" "<<p<<endl;
        sum = sum + *p;
        i++;
        p++;
    }

    cout<<"Sum --> "<<sum<<endl;
    cout<<"&x[0] --> "<<&x[0]<<endl;
    cout<<"p --> "<<p<<endl;
    return 0;
}