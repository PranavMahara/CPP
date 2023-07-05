// 54321 // rows -->5
// 54321
// 54321
// 54321
// 54321

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cout<<rows-j;
        }
        cout<<endl;
    }
    return 0;
}