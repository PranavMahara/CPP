#include<iostream>
#include<conio.h>
using namespace std;

template<class T>
void swapp(T &x, T &y){
    T z;
    z = x;
    x = y;
    y = z;
}

int main(){
    char a, b;
    cout<<"Enter a, b: ";
    cin>>a>>b;
    swapp(a, b);
    cout<<a<<" "<<b<<endl;

    int c, d;
    cout<<"Enter c, d: ";
    cin>>c>>d;
    swapp(c, d);
    cout<<c<<" "<<d;

    float p, q;
    cout<<"Enter p, q: ";
    cin>>p>>q;
    swapp(p,q);
    cout<<p<<" "<<q;

    return 0;
}