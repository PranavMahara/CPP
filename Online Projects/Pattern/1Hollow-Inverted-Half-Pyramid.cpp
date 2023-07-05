// ******
// *   *
// *  *
// * *
// *  

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows+1; i++){
        cout<<"*";
    }
    cout<<endl;
    
    for(int i=0; i<rows-1; i++){
        cout<<"*";
        for(int i=0; i<rows-2; i++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}