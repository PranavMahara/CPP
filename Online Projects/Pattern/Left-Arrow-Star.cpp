//      ******       //rows entered --> 6
//     *****
//    ****
//   ***
//  **
// *
//  **
//   ***
//    ****
//      *****
//       ******


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
        for(int j=i; j<rows; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<rows; i++){
        for(int j=rows-i; j<=rows; j++){
            cout<<" ";
        }
        for(int j=rows-i; j<=rows; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}