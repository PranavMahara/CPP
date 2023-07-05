#include<iostream>
#include<string>
using namespace std;

template <class T1, typename T2>
void display(T1 x, T2 y){
    cout << x << y<<endl;
}

int main(){
    display(1999,"EBG");
    display(12.34, 1234);
    
    return 0;
}