// Do this using while LOOP
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the rows --> ";
    cin>>rows;


    while(rows--){
        int i = 0;
        while(i<=rows){
            cout<<"*"<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}