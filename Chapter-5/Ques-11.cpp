// C++ Program to demonstrate an Example of Template specialization

#include <iostream>
using namespace std;

template <class T>
class Container {
    T element;
    
    public:
        Container (T arg) : element(arg) {}

        T increase () {
            return ++element;
        }
};

template <>
class Container <char> {
    char element;

    public:
        Container (char arg) : element(arg) {}

    char UpperCase(){
        if ((element>='a') && (element<='z')){
            element += 'A'-'a';
            return element;
        }
    }
};

int main () {
    Container<int> myint (12);
    Container<char> mychar ('c');
    cout << myint.increase() << endl;
    cout << mychar.UpperCase() << endl;
    
    return 0;
}