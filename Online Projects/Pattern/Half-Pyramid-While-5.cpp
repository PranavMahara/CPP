#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows --> ";
    cin>>rows;

    int i = 1;
    while(i<=rows){
        int j = 1;
        while(j<=i){
            cout<<(i-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}