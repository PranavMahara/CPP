//    +
//    +
//    +
// +++++++
//    +
//    +
//    +

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int i=0; i<rows; i++){
            cout<<" ";
        }
        cout<<"+"<<endl;
    }

    for(int i=0; i<rows*2+1; i++){
        cout<<"+";
    }
    cout<<endl;
    
    for(int i=0; i<rows; i++){
        for(int i=0; i<rows; i++){
            cout<<" ";
        }
        cout<<"+"<<endl;
    }
    return 0;
}