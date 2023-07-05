// using
// The keyword using introduces a name into the current declarative region (such as a block), thus
// avoiding the need to qualify the name. For example:

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

int main(){
    using first::x;
    using second::y;
    cout << x << '\n';
    cout << y << '\n';
    cout << first::y << '\n';
    cout << second::x << '\n';
    return 0;
}

// Notice how in main, the variable x (without any name qualifier) refers to first::x, whereas y refers 
// to second::y, just as specified by the using declarations. The variables first::y and second::x
// can still be accessed, but require fully qualified names.
