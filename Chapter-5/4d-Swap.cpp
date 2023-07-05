#include <iostream>
using namespace std;

template <typename T>
void swapp(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}
void fun(int m, int n, float a, float b){
    cout << m << n<<endl;
    swapp(m, n);
    cout << m << n<<endl;
    cout << a << b<<endl;
    swapp(a, b);
    cout << a << b<<endl;
}

int main(){
    fun(100, 200, 11.22, 33.44);
    return 0;
}