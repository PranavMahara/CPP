// E D C B A 
// E D C B
// E D C
// E D
// E          // rows --> 5

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=i; j<rows; j++){
            cout<<(char)('E'-j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}