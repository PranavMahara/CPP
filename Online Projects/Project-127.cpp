// Write a C++ program to check if three given numbers are in strict increasing order, such as 4 7 15, or 45, 56, 67, but not  6, 6, 8.

#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cout<<"Enter 3 number --> ";
    cin>>x>>y>>z;

    if((x<y && y<z && x<z) && (x!=y && y!=z && z!=x)){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
