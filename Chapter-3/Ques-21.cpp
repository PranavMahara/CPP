// Write a program to create function with no Return type and no Arguement

#include<iostream>
using namespace std;

void prime(){
    int num, i, flag = 0;
    cout << "Enter a positive integer enter to check: ";
    cin >> num;
    for(i = 2; i <= num/2; ++i){
        if(num % i == 0){ 
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout<<num<<" is not a prime number";
    }

    else{
        cout<<num<<" is a prime number";
    }
}

int main(){
    prime();
    return 0;
}