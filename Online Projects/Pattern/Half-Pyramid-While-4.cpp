#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows --> ";
    cin>>rows;

    int j = 1;

    while(j<=rows){
        int n = 1;
        int val = j;

        while(n<=j){
            cout<<val<<" ";
            val++;
            n++;
        }
        cout<<endl;
        j++;
    }
    return 0;
}