// CPP program without virtual destructor
// causing undefined behavior
// As a guideline, any time you have a virtual function in a class, 
// you should immediately add a virtual destructor (even if it does nothing). 
// This way, you ensure against any surprises later. 
#include <iostream>

using namespace std;

class base
{
public:
    base(){
        cout << "Constructing base\n";
    }

    ~base(){
        cout << "Destructing base\n";
    }
};

class derived : public base{
public:
    derived(){
        cout << "Constructing derived\n";
    }
    ~derived(){
        cout << "Destructing derived\n";
    }
};

int main(){
    derived p;
    base *b = &p;
    delete b;
    return 0;
}