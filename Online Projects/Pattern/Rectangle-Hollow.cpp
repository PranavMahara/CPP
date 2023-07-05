// Rectangle Pattern

// **********
// *        *
// *        *
// **********

#include<iostream>
using namespace std;

int main(){
    int length, breadth;
    cout<<"Enter the length and breadth: ";
    cin>>length>>breadth;

    for(int i=0; i<breadth; i++){
        cout<<"*";
    }
    cout<<endl;
    
    for(int i=0; i<length-2; i++){
        for(int i=0; i<breadth; i++){
            if(i==0 || i==breadth-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int i=0; i<breadth; i++){
        cout<<"*";
    }

    return 0;
}