// Write a program in C++ to display the pattern 
// n = 5
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
                                                                       
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=1; i<2*n; i++){
        if(i<n+1){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
        cout<<endl;
        }

        if(i+n+1<2*n){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
        }
    }
    return 0;
}
