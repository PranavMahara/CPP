#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows --> ";
    cin>>rows;

    int j = 1;
    while(j<=rows){
        int spaces = rows - j;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        int i = 1;
        while(i<=j){
            cout<<"*";
            i++;
        }
        cout<<endl;
        j++;
    }
    return 0;
}