// A B C D E // rows --> 5
// A B C D
// A B C
// A B
// A

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++){
        int k = 0;
        for(int j=i; j<rows; j++){
            cout<<(char)('A'+k)<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}