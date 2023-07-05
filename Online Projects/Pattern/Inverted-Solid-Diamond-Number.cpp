//      5  // rows --> 5
//     45
//    345
//   2345
//  12345
// 012345
//  12345
//   2345
//    345
//     45
//      5

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
        for(int j=rows-i; j<=rows; j++){
            cout<<j;
        }
        cout<<endl;
    }

    for(int i=0; i<rows+1; i++){
        for(int j=rows-i; j<rows; j++){
            cout<<" ";
        }
        for(int j=i; j<=rows; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}