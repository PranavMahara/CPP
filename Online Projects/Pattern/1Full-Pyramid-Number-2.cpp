//     1     // rows --> 5
//    123
//   12345
//  1234567
// 123456789

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=i; j<rows; j++){
            cout<<" ";
        }   
        cout<<"*"<<endl;
    }
    return 0;
}