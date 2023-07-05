// using and using namespace have validity only in the same block in which they are stated or in the
// entire source code file if they are used directly in the global scope. For example, it would be possible
// to first use the objects of one namespace and then those of another one by splitting the code in
// different blocks:

#include <iostream>
using namespace std;
namespace first{
    int x = 5;
}
namespace second{
    double x = 3.1416;
}
int main(){
    {
        using namespace first;
        cout << x << '\n';
    }
    {
        using namespace second;
        cout << x << '\n';
    }
    return 0;
}