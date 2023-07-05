//      F
//     EF
//    DEF
//   CDEF
//  BCDEF
// ABCDEF
//  BCDEF
//   CDEF
//    DEF
//     EF
//      F

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    int k = 'A';
    for(int i=0; i<rows; i++){
        for(int j=i; j<rows; j++){
            cout<<" ";
        }
        for(int j=rows-i; j<=rows; j++){
            cout<<(char)(k+j);
        }
        cout<<endl;
    }

    for(int i=0; i<rows+1; i++){
        for(int j=rows-i; j<rows; j++){
            cout<<" ";
        }
        for(int j=i; j<=rows; j++){
            cout<<(char)(k+j);
        }
        cout<<endl;
    }
    return 0;
}