//      A 
//     B B
//    C C C
//   D D D D
//  E E E E E
// F F F F F F
//  E E E E E
//   D D D D
//    C C C
//     B B
//      A

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0 ; i<rows; i++){
        for(int j=i; j<rows; j++){
            cout<<" ";
        }
        for(int j=rows-i; j<=rows; j++){
            cout<<(char)('A'+i)<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<rows; i++){
        for(int j=rows-i; j<=rows; j++){
            cout<<" ";
        }
        for(int j=i; j<rows; j++){
            cout<<(char)('E'-i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}