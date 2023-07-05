// Write a program that will print the first N numbers for a specific base.
// Print the first N numbers for a specific base:
// The number 11 in base 10 = 1*(10^1)+1*(10^0)=11
// Similarly the number 11 in base 7 = 1*(7^1)+1*(7^0)=8

#include <iostream>
using namespace std;

int main(){

    int term, base, r, q, num;
    cout << " Input the number of term: ";
    cin >> term;
    cout << " Input the base: ";
    cin >> base;
    cout << " The numbers in base " << base << " are: " << endl;
    for (int i = 1; i <= term; i++){
        r = i % base;
        q = i / base;
        num = q * 10 + r;
        cout << num << "  ";
    }

    return 0;
}