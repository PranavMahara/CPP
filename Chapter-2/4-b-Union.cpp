#include<iostream>
using namespace std;

union money{
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice = 34;

    cout<<m1.rice<<endl; // In Union we can only use one, either rice or car or pounds
    return 0;
}

// An enumeration is a programmer-defined type that is limited to a fixed list of values. A declaration gives the type a name and specifies the permissible values, which are called
// enumerators. Definitions can then create variables of this type. Internally the compiler treats
// enumeration variables as integers.