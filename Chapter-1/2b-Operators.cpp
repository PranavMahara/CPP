// Operator type Operators Precedence

/*   UnArReLoCoAs

Unary               (!, ++, ––, +, –)                     Highest

Arithmetic          Multiplicative (*, /, %)
                    Additive (+, –)

Relational          Inequality (<, >, <=, >=)
                    Equality (==, !=)

Logical             And &&
                    Or ||

Conditional         ?:

Assignment          (=, +=, –=, *=, /=, %= )              Lowest

*/

#include<iostream>
using namespace std;

int main(){
    int a = 8;
    int *ptr = &a;
    cout<<a<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    return 0;
}