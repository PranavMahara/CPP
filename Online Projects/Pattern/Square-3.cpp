// 1 2 3
// 4 5 6
// 7 8 9

// Do this using while loop

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the rows --> ";
    cin>>rows;
    
    int i = 1, j = rows;

    while(rows--){
        int k = j;
        while(k!=0){
            cout<<i<<" ";
            i++;
            k--;
        }

        cout<<endl;
    }
    return 0;
}