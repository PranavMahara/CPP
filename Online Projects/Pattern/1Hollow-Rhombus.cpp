// error
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    
    for(int i=0; i<rows; i++){
        cout<<" ";
    }
    
    for(int i=0; i<rows; i++){
        cout<<"*";
    }
    cout<<endl;

    for(int i=1; i<rows; i++){
        for(int j=i; j<rows; j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=0; j<rows-i; j++){
            cout<<" ";
        }
        cout<<"*"<<endl;


    }

    
    return 0;
}