// F
// FE
// FED
// FEDC
// FEDCB
// FEDCBA
// FEDCB
// FEDC
// FED
// FE
// F

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    int k = rows-1 + 'A';
    for(int i=0; i<rows; i++){
        int p = 0;
        for(int j=rows-i; j<rows; j++){
            cout<<(char)(k-p);
            p++;
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++){
        int p = 0;
        for(int j=i; j<rows; j++){
            cout<<(char)(k-p);
            p++;
        }
        cout<<endl;
    }

    return 0;
}