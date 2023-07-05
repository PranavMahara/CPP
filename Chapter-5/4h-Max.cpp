#include<iostream>
#include<conio.h>
using namespace std;

template<class T>
T maxx(T a, T b){
    if (a>b){
        return a;
    }

    else{
        return b;
    }
}

int main(){
    char ch1,ch2;
    cout<<"Enter two characters:";
    cin>>ch1>>ch2;
    cout<<maxx(ch1,ch2);

    int a,b;
    cout<<"Enter a, b:";
    cin>>a>>b;
    cout<<maxx(a,b);

    float p,q;
    cout<<"Enter p, q:";
    cin>>p>>q;
    cout<<maxx(p,q);
    return 0;
}