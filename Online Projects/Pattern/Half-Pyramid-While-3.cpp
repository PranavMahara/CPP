// Do this using while LOOP
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the rows --> ";
    cin>>rows;

    int j = 1;

    while(j<=rows){
        int n = 1;
        while(n<=j){
            cout<<j<<" ";
            n++;
        }

        cout<<endl;
        j++;
    } 
    return 0;
}