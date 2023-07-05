// 2 Types of Overloading --> 
//     1) Function Overloading
//     2) Operator Overloading

// In C++, we can change the way operators work for user-defined types like objects and structures. 
// This is known as operator overloading. 

// Consider the operation of addition. For two numbers, the operation will 
// generate a sum. If the operands are strings, then the operation would produce a third 
// string by concatenation. The process of making an operator to exhibit different behaviors 
// in different instances is known as operator overloading. 
#include<iostream>
using namespace std;

class Count{
    int value;

    public:
        Count() : value(5){}

        void operator++(){
            value++;
        }

        void display(){
            cout<<"VALUE --> "<<value<<endl;
        }
};

int main(){
    Count a;
    ++a;
    a.display();

    return 0;
}

// Here, when we use ++count1;, the void operator ++ () is called. 
// This increases the value attribute for the object count1 by 1.

// Things to Remember in C++ Operator Overloading
// Two operators = and & are already overloaded by default in C++. For example, to copy objects of the same class, we can directly use the = operator. We do not need to create an operator function.
// Operator overloading cannot change the precedence and associativity of operators. However, if we want to change the order of evaluation, parentheses should be used.
// There are 4 operators that cannot be overloaded in C++. They are:
//      :: (scope resolution)
//      . (member selection)
//      .* (member selection through pointer to function)
//      ?: (ternary operator)