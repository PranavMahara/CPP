// Write a program in C++ to display the pattern like right angle triangle using an asterisk.

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=i; j>=0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}