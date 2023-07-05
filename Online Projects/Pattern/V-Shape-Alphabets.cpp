// E       E 
//  D     D
//   C   C
//    B B
//     A   // rows --> 5

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    int k = rows+'A';
    for(int i=0; i<rows; i++){
        for(int j=rows-i; j<rows; j++){
            cout<<" ";
        }
        cout<<(char)(k-i);
        for(int j=i; j<rows; j++){
            cout<<"  ";
        }
        cout<<" "<<(char)(k-i)<<endl;
    }

    for(int i=0; i<rows; i++){
        cout<<" ";
    }
    cout<<" A";
    
    return 0;
}