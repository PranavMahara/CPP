// Do this using while LOOP
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the rows --> ";
    cin>>rows;

    int j = rows;
    while(rows--){
        int i = 0;
        while(rows+i<j){
            cout<<"*"<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}