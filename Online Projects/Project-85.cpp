//  Write a C++ program to compute the sum of the two given integers and count the number of digits of the sum value

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    int sum = a+b;

    cout<<"The sum is "<<sum<<endl;

    int count = 0;
    while(sum!=0){
        count++;
        sum = sum/10;
    }
    cout<<"The number of digits in the sum: "<<count<<endl;

    return 0;
}