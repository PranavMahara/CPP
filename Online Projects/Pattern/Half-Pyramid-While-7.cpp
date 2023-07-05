#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows --> ";
    cin>>rows;

    int j = 1;

    while (j<=rows){
        int n = 1;
        char start = 'A' + n - rows;

        while(n<=j){
            cout<<start;
            start++;
            n++;
        }
        cout<<endl;
        j++;

    }
    

    return 0;
}