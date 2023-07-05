#include <iostream>
using namespace std;

class Counter{
    private:
        int count; 

    public:
        Counter() : count(0){}

        void inc_count(){ 
            count++; 
        }

        int get_count(){ 
            return count; 
        }
};


int main(){
    Counter c1, c2; 
    cout << "C1 = " << c1.get_count()<<endl; 
    cout << "C2 = " << c2.get_count()<<endl;
    c1.inc_count(); 
    c2.inc_count(); 
    c2.inc_count(); 
    cout << "C1 = " << c1.get_count()<<endl; 
    cout << "C2 = " << c2.get_count()<<endl;

    return 0;
}

// count()
// { count = 0; }
// However, this is not the preferred approach (although it does work). Here’s how you should
// initialize a data member:
// count() : count(0)
// { }
// The initialization takes place following the member function declarator but before the function
// body. It’s preceded by a colon. The value is placed in parentheses following the member data.
// If multiple members must be initialized, they’re separated by commas. The result is the initializer
// list (sometimes called by other names, such as the member-initialization list).
// someClass() : m1(7), m2(33), m2(4) ← initializer list
// { }
// Why not initialize members in the body of the constructor? The reasons are complex, but have
// to do with the fact that members initialized in the initializer list are given a value before the
// constructor even starts to execute. This is important in some situations. For example, the 
// initializer list is the only way to initialize const member data and references.
// Actions more complicated than simple initialization must be carried out in the constructor
// body, as with ordinary functions.