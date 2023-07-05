//     1  // rows --> 5
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

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
        for(int j=rows-i-1; j<rows; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}