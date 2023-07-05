#include <iostream>
using namespace std;

int main() {
    int var1 = 5;
    int var2 = 6;
    if ((var2 = 1) == var1)
        cout << var2;
    else
        cout << (var2 + 1);
}


// Extras
// if-statement block is only not executed when the expression evaluates to 0. For all other values, it will be treated as true.