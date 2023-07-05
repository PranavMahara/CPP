#include<iostream>
using namespace std;

int main(){
    auto a = 10; // will set the variable a as int type
    auto b = 7.65; //will set the variable b as float
    auto c = "abcedfh"; // will set the variable c as string

    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(c).name()<<endl;
    return 0;
}