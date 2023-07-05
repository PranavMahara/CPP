// Write a C++ program to swap data using function templates.

#include <iostream>
using namespace std;

template <class T>
void swapargs(T &x, T &y){
    T temp;
    temp = x;
    x = y;
    y = temp;
}

void fun(int m, int n){
    cout << "m and n before swap: " << m << " " << n << endl;
    swapargs(m, n);
    cout << "m and n after swap: " << m << " " << n << endl;
}

int main(){
    int i = 10, j = 20;
    fun(i, j);
    return 0;
}
