#include <iostream>
using namespace std;

void intfrac(float, float&, float&); 

int main(){
    float number, intpart, fracpart; 

    do {
        cout << "\nEnter a real number: "; 
        cin >> number;
        intfrac(number, intpart, fracpart); 
        cout << "Integer part is " << intpart 
        << ", fraction part is " << fracpart << endl;

    } while( number != 0.0 ); 

    return 0;
}

void intfrac(float n, float& intp, float& fracp){
    long temp = static_cast<long>(n); 
    intp = static_cast<float>(temp); 
    fracp = n - intp; 
}

// The main() part of this program asks the user to enter a number of type float. The program
// will separate this number into an integer and a fractional part. That is, if the user’s number is
// 12.456, the program should report that the integer part is 12.0 and the fractional part is 0.456.
// To find these two values, main() calls the function intfrac(). Here’s some sample interaction:
// Enter a real number: 99.44
// Integer part is 99, fractional part is 0.44
// Some compilers may generate spurious digits in the fractional part, such as 0.440002. This is
// an error in the compiler’s conversion routine and can be ignored. Refer to Figure 5.7 in the following discussion.
// The intfrac() function finds the integer part by converting the number (which was passed to
// the parameter n) into a variable of type long with a cast, using the expression
// long temp = static_cast<long>(n);
// This effectively chops off the fractional part of the number, since integer types (of course)
// store only the integer part. The result is then converted back to type float with another cast:
// intp = static_cast<float>(temp);
// The fractional part is simply the original number less the integer part. (We should note that a
// library function, fmod(), performs a similar task for type double.)
// The intfrac() function can find the integer and fractional parts, but how does it pass them
// back to main()? It could use a return statement to return one value, but not both. The problem
// is solved using reference arguments. Here’s the declarator for the function:
// void intfrac(float n, float& intp, float& fracp)
// The ampersand is not used in the function call:
// intfrac(number, intpart, fracpart); // no ampersands
// From the function call alone, there’s no way to tell whether an argument will be passed by reference or by value.
// While intpart and fracpart are passed by reference, the variable number is passed by value.
// intp and intpart are different names for the same place in memory, as are fracp and
// fracpart. On the other hand, since it is passed by value, the parameter n in intfrac() is a
// separate variable into which the value of number is copied. It can be passed by value because
// the intfrac() function doesn’t need to modify number.