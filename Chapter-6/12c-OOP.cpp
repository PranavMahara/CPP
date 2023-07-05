#include <iostream>
using namespace std;

namespace foo{
    int value() { return 5; }
}

namespace bar{
    const double pi = 3.1416;
    double value() { return 2 * pi; }
}

int main(){
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';
    return 0;
}

// In this case, there are two functions with the same name: value. One is defined within the 
// namespace foo, and the other one in bar. No redefinition errors happen thanks to namespaces. 
// Notice also how pi is accessed in an unqualified manner from within namespace bar (just as pi), 
// while it is again accessed in main, but here it needs to be qualified as bar::pi

// Namespaces can be split: Two segments of a code can be declared in the same namespace:
1 namespace foo { int a; }
2 namespace bar { int b; }
3 namespace foo { int c; }

// This declares three variables: a and c are in namespace foo, while b is in namespace bar. 
// Namespaces can even extend across different translation units (i.e., across different files of source 
// code).