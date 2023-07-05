// Write a program in C++ to print a square pattern with # character.
// Side --> 5
// # # # # # 
// # # # # #
// # # # # #
// # # # # #
// # # # # #

#include<iostream>
using namespace std;

int main(){
    int side;
    cout<<"Enter the side of square: ";
    cin>>side;

    for(int i=0; i<side; i++){
        for(int i=0; i<side; i++){
            cout<<"# ";
        }
        cout<<endl;
    }
    return 0;
}