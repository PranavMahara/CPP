// overloading operators example
#include <iostream>
using namespace std;

class CVector{
    public:
        int x, y;
        CVector(){};
        CVector(int a, int b) : x(a), y(b) {}
        CVector operator+(const CVector &);
};

CVector CVector::operator+(const CVector &param){
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

int main(){
    CVector foo(3, 1);
    CVector bar(1, 2);
    CVector result;
    result = foo + bar;
    cout << result.x << ',' << result.y << '\n';
    return 0;
}

// Secondly, consider the following example, starting with this struct:

struct USCurrency {
int dollars;
int cents;
};
// Perhaps we would like to add two USCurrency objects together and get a new one as a result, just like in normal addition:

USCurrency a = {2, 50};
USCurrency b = {1, 75};
USCurrency c = a + b;
// This of course gives a compiler error, but we can define behavior that our datatype should have when used with the addition operator by overloading the addition operator. This can be done either inside the class as part of its definition (the addition from the point of view of the object on the left side of the +):

USCurrency operator+(const USCurrency o) {
    USCurrency tmp = {0, 0};
    tmp.cents = cents + o.cents;
    tmp.dollars = dollars + o.dollars;
    if(tmp.cents >= 100) {
    tmp.dollars += 1;
    tmp.cents -= 100;
}

    return tmp;
}
// or outside the class as a function independent of the class (the addition from the point of view of the +):

USCurrency operator+(const USCurrency m, const USCurrency o) {
USCurrency tmp = {0, 0};
tmp.cents = m.cents + o.cents;
tmp.dollars = m.dollars + o.dollars;

if(tmp.cents >= 100) {
tmp.dollars += 1;
tmp.cents -= 100;
}
 return tmp;
}
// Similarly, we can overload the << operator to display the result:

 ostream& operator<<(ostream &output, const USCurrency
 output << "$" << o.dollars << "." << o.cents;
 return output;
 }
// Assuming the above definitions, we can run the following program:

int main() {
USCurrency a = {2, 50};
USCurrency b = {1, 75};
USCurrency c = a + b;
cout << c << endl;
return 0;
}
// and get the printout $4.25. The list of overloadable operators:

// + - * / += -= *= /= % %= ++ --
// = == < > <= >= ! != && ||
// << >> <<= >>= & ^ | &= ^= |= ~
// [] () , ->* -> new new[] delete delete[]