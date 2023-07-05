//     1  rows --> 5
//    222
//   33333
//  4444444
// 555555555
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int k = i; k<rows-1; k++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<i+1<<i+1;
        }
        cout<<endl;
    }
    return 0;
}