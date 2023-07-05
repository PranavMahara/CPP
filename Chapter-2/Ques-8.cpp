// Write a C++ program that reads an integer between 0 and 65535 from the
// keyboard and uses it to seed a random number generator.Then output 20
// random numbers between 1 and 100 on screen.

#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main(){
    unsigned int seed;
    cout<<"Enter random number between 0 and 65535: ";
    cin>>seed;
    srand(seed);

    cout<<"Random Numbers"<<endl;
    for(int i=1; i<=20; i++){
        cout<<setw(20)<<i<<" "<<"Random Number --> "<<setw(3)<<(rand()%100+1)<<endl;
    }    
    return 0;
}