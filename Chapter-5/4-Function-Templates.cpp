#include<iostream>
using namespace std;

template <typename T1, typename T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a = funcAverage(5, 2);
    cout<<a<<endl;
    return 0;
}