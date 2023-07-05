// What value of 'x' will generate an error?
#include<iostream>
#include<string>
using namespace std;

int main() {
    string x;
    cin >> x;
    return 0;
}



// Ans  --> x = "Hello World"
// Since we have defined our variable 'x' as a string, it can't take space character as input.






// 'cin' stops its extraction when it encounters a blank space or a new line.

// Assignment operator is right to left associative while all others work similar to normal rules of evaluation.