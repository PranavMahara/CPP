// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4 

// do this using while loop

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the rows --> ";
    cin>>rows;
    
    int i = 1;

    while(i<=rows){
        int j = 1;
        while(j<=rows){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}