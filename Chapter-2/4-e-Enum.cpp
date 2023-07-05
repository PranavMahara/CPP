#include<iostream>
using namespace std;

int main(){
    enum shape{circle, square = 5, triangle = 69};
    cout<<circle<<endl;
    cout<<square<<endl;
    cout<<triangle<<endl;
    

    enum position{off, on};
    enum{hi, bye};// Enum without tag names allowed
    // hi is 0 and bye is 1
    
    return 0;
}