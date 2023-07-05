#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class custom{
    public:
        T1 a;
        T2 b;
        T3 c;

        custom(T1 x, T2 y, T3 z) : a(x), b(y), c(z){}

        void display(){
            cout<<"The value of a, b, c is "<<a<<" "<<b<<" "<<c<<endl;
        }
};

int main(){
    custom <>abb(1, 2, 55);
    abb.display();

    custom<float, char, int> bab(1, 69, 55);
    bab.display();
    return 0;
}