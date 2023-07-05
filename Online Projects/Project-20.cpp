// Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            cout<<n<<" ";
        }
        cout<<endl;
    }    
    return 0;
}