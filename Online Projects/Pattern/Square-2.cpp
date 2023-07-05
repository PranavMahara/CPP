// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1 

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
            cout<<rows-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}