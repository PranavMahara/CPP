#include<iostream>
using namespace std;

string fun(){
    cout<<"Hello";
    return "Hello";
}

int fuun(){
    cout<<"Hello";
    return 10;
}

int main(){
    cout<<sizeof(fun())<<endl;
    cout<<sizeof(fuun());

    return 0;
}