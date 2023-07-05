// There are two ways of creating symbolic constants in c++.
// 1. using the qualifier const.
// 2. defining a set of integer constants using enum keywords
#include<iostream>
using namespace std;

int main(){
    const int size = 10;
    char name(size);

    enum{x, y, z};
    return 0;
}