// 11111 // rows --> 5
// 22222
// 33333
// 44444
// 55555

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}