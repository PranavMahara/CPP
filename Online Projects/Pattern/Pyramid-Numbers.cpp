// ROWS --> 5
// 1 3 5 7 9 7 5 3 1 
//   1 3 5 7 5 3 1
//     1 3 5 3 1
//       1 3 1
//         1

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the rows --> ";
    cin>>rows;
    
    int k = 0;
    for(int i=rows; i>0; i--){
        for(int i=rows-k; i<rows; i++){
            cout<<"  ";
        }
        
        for(int i=1; i<=rows; i++){
            cout<<2*i-1<<" ";
        }

        for(int i=rows-1; i>0; i--){
            cout<<2*i-1<<" ";
        }

        cout<<endl;       
        rows--;
        k++;
    }
    return 0;
}