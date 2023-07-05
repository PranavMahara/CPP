// A       // rows --> 5
// B B
// C C C
// D D D D
// E E E E E

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=rows-i; j<=rows; j++){
            cout<<(char)('A'+i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}