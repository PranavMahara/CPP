// AAAAA rows --> 5
// BBBBB
// CCCCC
// DDDDD
// EEEEE

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cout<<(char)('A'+i);
        }
        cout<<endl;
    }
    return 0;
}