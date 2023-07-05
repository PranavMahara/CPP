// String Concatenation
// The end-to-end joining of two strings is called string concatenation. For example, the concatenation of “Coding” and “Ninjas" is “Coding Ninjas"

// There are various ways to concatenate strings, and they are as follows:

// ‘+’ Operator
// strcat() method
// append() method

// i) + Operator: The ‘+’ operator adds the two input strings and returns a new string that contains the concatenated string.

// string new_string = string1 + string2;

#include <iostream>
using namespace std;
int main() {
    string str1 = "Coding";
    string str2 = " Ninjas!";
    cout << "Concatenated String:" << endl;
    str1 = str1 + str2;
    cout << str1;
    return 0;
}

// Output:
// Concatenated String:
// Coding Ninjas!

// ii) strcat() method: C++ has a built-in method to concatenate strings. The strcat() method is used to concatenate strings in C++.
// The strcat() function takes the char array as input and then concatenates the input values passed to the function.
// strcat() function is included in the cstring library.

// Syntax:

// strcat(char array1, char array2);

#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char str1[50] = "Coding";
    char str2[50] = " Ninjas!";
    cout << "Concatenated String:" << endl;
    strcat(str1, str2);
    cout << str1;
    return 0;
}

// Output:
// Concatenated String:
// Coding Ninjas!

// iii) append() method: C++ has another built-in method: append() to concatenate strings. The append() method can be used to add strings together. It takes a string as a parameter and adds it to the end of the other string object.

// Syntax:

// string1.append(string2);

#include <iostream>
using namespace std;
int main() {
    string str1 = "Coding";
    string str2 = " Ninjas!";
    cout << "Concatenated String:" << endl;
    str1.append(str2);
    cout << str1;
    return 0;
}

// Output:
// Concatenated String:
// Coding Ninjas!

// string s; // other way
// s.push_back('a');