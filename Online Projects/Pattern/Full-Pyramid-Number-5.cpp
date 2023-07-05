// 5 5 5 5 5  rows --> 5
//  4 4 4 4
//   3 3 3
//    2 2
//     1

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=rows-i; j<rows; j++){
            cout<<" ";
        }
        for(int j=i; j<rows; j++){
            cout<<rows-i<<" ";
        }
        cout<<endl;
    }
    return 0;
}