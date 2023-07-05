#include<iostream>
#include<conio.h>
using namespace std;

template <class T>
T maxx(T a, T b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
    
}

int main(){
    char ch1, ch2, ch3;
    cout <<"Enter two characters --> "<< endl;
    cin >> ch2 >> ch3;

    ch1 = maxx(ch2, ch3);

    int a, b, c;
    cout <<"Enter two integers :";
    cin >> a >> b;
    c = maxx(a, b);
    cout <<"Max(a, b): "<< c << endl;

    float f1, f2, f3;
    cout <<"Enter two floats<f1f2> :";
    cin >> f1, f2;
    f3 = maxx(f1, f2);
    cout <<"max(f1, f2) :"<< f3;
}
