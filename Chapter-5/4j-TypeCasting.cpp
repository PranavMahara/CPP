#include<iostream>
using namespace std;

template <class T,class U>
T sum(T a, U b){
    return a+(U)b;       // It is like typecasting
                         // if U is int, then it is a + (int)b
}

int main(){
    cout<<sum(4, 5.5);
    cout<<sum(5.4, 3);
    return 0;
}