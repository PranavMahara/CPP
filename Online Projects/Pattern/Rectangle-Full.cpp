// Rectangle Pattern

// **********
// **********
// **********

#include<iostream>
using namespace std;

int main(){
    int length, breadth;
    cout<<"Enter the length and breadth: ";
    cin>>length>>breadth;

    for(int i=0; i<breadth; i++){
        for(int i=0; i<length; i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
