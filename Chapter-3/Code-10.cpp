#include <iostream>
using namespace std;

class ABC
{
private:
    static int count;
    int number;

public:
    ABC()
    {
        number = ++count;
    };

    void Serial()
    {
        cout << "I am object " << number << endl;
    }
};

int ABC::count;

int main()
{
    ABC obj1;
    ABC obj2;
    ABC obj3;
    obj1.Serial();
    obj2.Serial();
    obj3.Serial();
    cin.get();
}
