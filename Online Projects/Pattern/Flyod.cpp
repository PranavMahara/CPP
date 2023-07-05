// rows --> 5
// 1    
// 23   
// 456  
// 78910
// 1112131415

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    int k = 1;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    return 0;
}