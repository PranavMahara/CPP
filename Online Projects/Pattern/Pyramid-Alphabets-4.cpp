// E E E E E 
// D D D D
// C C C
// B B
// A          // rows --> 5

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=i; j<rows; j++){
            cout<<(char)('E'-i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}