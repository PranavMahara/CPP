// String Comparison

// i) strcmp() method: C++ String has got in-built functions for data of string type. To compare two strings, we can use the cstring strcmp() function.

// The strcmp() function compares two strings in lexicographical manner.

// Syntax:

// int strcmp(const char * leftStr, const char * rightStr);

// What does strcmp() return?
// This function can return three different integer values based on the comparison, and they are as follows:

// Zero- when both strings are found to be identical
// Greater(+ve) than 0- when the first leftStr is lexicographically greater than second rightStr.
// Smaller(-ve) than 0- when the first leftStr is lexicographically greater than second rightStr.

#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char str1[50] = "Coding";
    char str2[50] = " Ninjas!";
    int res1 = strcmp(str1, str2);
    int res2 = strcmp(str2, str1);
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}
// Output:
// 35
// -35

// ii) compare() method: C++ has in-built compare() function in order to compare two strings efficiently.

// The compare() function compares two strings and returns the following values according to the matching cases:

// Returns 0 if both the strings are the same.
// Returns <0 if the first string’s character’s value is smaller than the second string input.
// Returns >0 when the second string is greater in comparison.

// Syntax:

// str1.compare(str2);

#include <iostream>
#include<cstring>
using namespace std;
int main() {
    string str1 = "Coding";
    string str2 = " Ninjas!";
    string str3 = "Coding";
    int res1 = str1.compare(str2);
    int res2 = str2.compare(str1);
    int res3 = str3.compare(str1);
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;
    return 0;
}
// Output:
// 35
// -35
// 0

// iii) Relational operator: If strings are compared using relational operators, their characters are compared lexicographically according to the current character traits, which means it starts comparison character by character starting from the first character until the characters in both strings are equal or a NULL character is encountered.

// Relational operators return either true or false, true if the corresponding comparison holds, false otherwise.
// Following are the Relational Operators that can be used to compare two strings:

// >: Greater than
// < : Less than
// == : Equal to
// != : Not equal to
// >=: Greater than and equal to
// <=: Less than and equal to

// Rules:

// 1) s1 < s2: A string s1 is smaller than s2 string, if either, length of s1 is shorter than s2 or first mismatched character is smaller.
// 2) s1 > s2: A string s1 is greater than s2 string if either, length of s1 is longer than s2, or the first mismatched character is larger.
// 3) <= and >= have almost the same implementation with additional features of being equal as well.
// 4) ==: If, after comparing lexicographically, both strings are found to be the same, then they are said to be equal.
// 5)!=: If any of the points from 1 to 3 follow up then, strings are said to be unequal.

#include <iostream>
using namespace std;
int main() {
    string str1 = "Coding";
    string str2 = " Ninjas!";
    string str3 = "Coding";
    bool res1 = str1 == str2;
    bool res2 = str2 < str1;
    bool res3 = str3 != str1;
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;
    return 0;
}

// Output:
// 0
// 1
// 0