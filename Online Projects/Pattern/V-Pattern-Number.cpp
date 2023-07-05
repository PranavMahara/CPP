// Enter the number of rows: 5
// 5        5
//  4      4 
//   3    3  
//    2  2   
//     11  

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    
    for(int i=0; i<rows; i++){
        for(int j=rows-i; j<rows; j++){
            cout<<" ";
        }
        cout<<rows-i;
        for(int j=i; j<rows-1; j++){
            cout<<"  ";
        }
        cout<<rows-i<<endl;
        
    }
    return 0;
}