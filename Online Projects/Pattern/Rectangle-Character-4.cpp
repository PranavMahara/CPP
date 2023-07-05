// E D C B A // rows --> 5
// E D C B A
// E D C B A
// E D C B A
// E D C B A

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cout<<(char)('E'-j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}