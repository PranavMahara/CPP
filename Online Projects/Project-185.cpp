// Write a C++ programming to add repeatedly all digits of a given non-negative number until the result has only one digit.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number --> ";
    cin>>num;

    int count = 0;
    int sum = 0;

    while(num!=0){
        sum = sum + num%10;
        count++;
        num = num/10;
    }
    return 0;
}