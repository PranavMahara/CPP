// E E E E E // rows --> 5
// D D D D D
// C C C C C
// B B B B B
// A A A A A

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cout<<(char)('E'-i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}