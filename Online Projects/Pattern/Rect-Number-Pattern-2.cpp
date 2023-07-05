// 12345 // rows --> 5
// 12345
// 12345
// 12345
// 12345

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}