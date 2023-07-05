// 1    
// 22   
// 3 3  
// 4  4
// 55555
// error --> spacing

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    cout<<"1"<<endl;

    for(int i=1; i<rows-1; i++){
        cout<<i+1;
        for(int j=rows-i; j<rows; j++){
            cout<<" ";
        }
        cout<<i+1<<endl;
    }

    for(int i=0; i<rows; i++){
        cout<<rows;
    }
    return 0;
}