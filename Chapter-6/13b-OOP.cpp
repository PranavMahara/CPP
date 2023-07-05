#include <iostream>
using namespace std;
namespace first{
    int x = 5;
    int y = 10;
}
namespace second{
    double x = 3.1416;
    double y = 2.7183;
}
int main () {
    using namespace first;
    cout << x << '\n';
    cout << y << '\n';
    cout << second::x << '\n';
    cout << second::y << '\n';
    return 0;
}

// In this case, by declaring that we were using namespace first, all direct uses of x and y without 
// name qualifiers were also looked up in namespace first