//     A
//    AB
//   ABC
//  ABCD
// ABCDE // rows --> 5

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

        int k = 0;
        for(int j=rows-i; j<=rows; j++){
            cout<<(char)('A'+k);
            k++;
        }
        cout<<endl;
    }
    return 0;
}