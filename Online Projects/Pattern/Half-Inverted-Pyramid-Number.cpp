// Enter the number of rows: 5
// 12345
// 1234 
// 123  
// 12   
// 1
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}