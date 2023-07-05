// Overflow and Underflow

// Overflow occurs when we assign a value to more than its range, and Underflow is the opposite of the overflow. In the case of overflow and underflow, the C++ compiler doesn’t throw any errors. It simply changes the value. 
// For example, in case of an int variable, the maximum value of int data type is 2,147,483,647  (INT_MAX ) and after incrementing 1 on this value, it will return -2,147,483,648 (INT_MIN). This is known as overflow. 
// The minimum value of int data type is -2,147,483,648  (INT_MIN) and after decrementing 1 on this value, it will return 2,147,483,647 (INT_MAX). This is known as underflow.

#include <iostream>
using namespace std;

int main() {
    int x = INT_MAX; //2147483647
    int y = INT_MIN; //-2147483648
    cout<<x<<" "<<y<<endl;
    x = x + 1;
    y = y - 1;
    cout << x <<" "<< y;

    return 0;
}
// Output: 
// -2147483648
// 2147483647