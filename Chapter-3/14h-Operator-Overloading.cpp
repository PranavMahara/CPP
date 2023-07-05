// Operator overloading is one of the most exciting features of object-oriented programming. It
// can transform complex, obscure program listings into intuitively obvious ones. For example,
// statements like
// d3.addobjects(d1, d2);
// or the similar but equally obscure
// d3 = d1.addobjects(d2);
// can be changed to the much more readable
// d3 = d1 + d2;

// Overloading Unary Operators
// Examples of unary operators are the increment and decrement operators ++ and --, and the unary minus, as in -33.

#include <iostream>
using namespace std;

class Counter{
    private:
        int count; 
    public:
        Counter() : count(0){}

        int get_count(){
            return count;
        }

        void operator++(){
            count++;
        }
};

int main(){
    Counter c1, c2;                     
    cout << "c1 =" << c1.get_count()<<endl; 
    cout << "c2 =" << c2.get_count()<<endl;
    ++c1; 
    ++c2; 
    ++c2; 

    cout << "c1 = " << c1.get_count()<<endl;  
    cout << "c2 = " << c2.get_count()<<endl;
    return 0;
}