#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows --> ";
    cin>>rows;

    int j = 1;

    while (j<=rows){
        int n = 1;

        while(n<=j){
            char c = 'A' + j - 1;
            cout<<c<<" ";
            n++;
        }
        cout<<endl;
        j++;

    }
    

    return 0;
}