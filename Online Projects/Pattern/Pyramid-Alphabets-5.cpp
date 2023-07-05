// A A A A A 
// B B B B
// C C C
// D D
// E         // rows --> 5

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=i; j<rows; j++){
            cout<<(char)('A'+i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}