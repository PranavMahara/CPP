#include <iostream>
using namespace std;
// A static int variable remains in memory while the program is running. 
// A normal or auto variable is destroyed when a function call where the variable was declared is over 
int* neww(){
    static int r[3];

    for (int i = 0; i < 3; ++i) {
        r[i] = (i+1);
    }
    
    return r;
}
 
int main () {
    int *p = neww();
        
    for (int i = 0; i < 3; i++ ) {
        cout<<*(p+i)<<" ";
    }
 
   return 0;
}