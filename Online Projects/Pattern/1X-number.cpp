// 1   1  
//  2 2
//   3
//  4 4
// 5   5
// spacing issue
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        for(int j=rows-i; j<rows; j++){
            cout<<" ";
        }
        cout<<i+1;
        for(int j=i; j<rows-1; j++){
            cout<<"  ";
        }
        cout<<i+1<<endl;
    }

    for(int i=1; i<rows; i++){
        for(int j=i; j<rows; j++){
            cout<<" ";
        }
        cout<<rows-i;
        for(int j=rows-i; j<=rows-1; j++){
            cout<<"  ";
        }
        cout<<rows-i<<endl;
    }
    return 0;
}
