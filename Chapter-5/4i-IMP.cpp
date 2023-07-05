#include<iostream>
using namespace std;

template <class T>
void print( T a){
    cout<<a;
}

template <class T>
void print( T a, int n){
    for(int i=0; i<n; i++){
        cout<<a;
    }
}

int main(){
    print(1);
    print(3.4);
    print(455, 3);
    print("hello", 3);
    return 0;
}