//     1  // rows --> 5
//    321
//   54321
//  7654321
// 987654321

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

        
    }
    return 0;
}