// 1     7 
// 12   67
// 123 567
// 1234567
// 123 567
// 12   67
// 1     7

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=rows-i; j<=rows; j++){
            cout<<j+1<<" ";
        }
        for(int k = i; k<rows-1; k++){
            cout<<"  ";
            cout<<"  ";
        }
        for(int j=rows-i; j<=rows; j++){
            cout<<j+3<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++){
        for(int j=i; j<rows; j++){
            cout<<i<<" ";
        }
        for(int k = rows - i; k<=rows-1; k++){
            cout<<"  ";
            cout<<"  ";
        }
        for(int j=i; j<rows; j++){
            cout<<rows-i<<" "; 
        }
        cout<<endl;
    }

    return 0;
}