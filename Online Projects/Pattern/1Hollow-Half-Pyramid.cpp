#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    cout<<"*"<<endl;
    for(int i=0; i<rows; i++){
        cout<<"*";
        for(int j=rows-i-1; j<rows; j++){
            cout<<" ";
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    
    for(int i=0; i<rows; i++){
        cout<<"*  ";
    }
    return 0;
}