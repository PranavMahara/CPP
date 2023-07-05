// Write a recursive function that adds first ‘n’ natural numbers.

#include<iostream>
using namespace std;

int sum(int a){
    if(a==0){
        return 0;
    }

    else{
        return (a+sum(a-1));
    }

}

int main(){
    
    return 0;
}