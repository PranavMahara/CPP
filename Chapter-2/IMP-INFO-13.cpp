// Modifying string Objects

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1("Quick! Send for Count Graystone.");
    string s2("Lord");
    string s3("Don't ");

    s1.erase(0, 7); 
    s1.replace(9, 5, s2); 
    s1.replace(0, 1, "s"); 
    s1.insert(0, s3); 
    s1.erase(s1.size()-1, 1); 
    s1.append(3, '!'); 
    int x = s1.find(' '); 
    while( x < s1.size() ){
        s1.replace(x, 1, "/");
        x = s1.find(' '); 
    }
    cout << "s1: " << s1 << endl;

    return 0;
}
/*
The erase() function removes a substring from a string. Its first argument is the position of
the first character in the substring, and the second is the length of the substring. In the example
it removes “Quick “ from the beginning of the string. The replace() function replaces part of
the string with another string. The first argument is the position where the replacement should
begin, the second is the number of characters in the original string to be replaced, and the third
is the replacement string. Here “Count” is replaced by “Lord”.
The insert() function inserts the string specified by its second argument at the location 
specified by its first argument. Here it inserts “Don’t “ at the beginning of s1. The second use
of erase() employs the size() member function, which returns the number of characters in
the string object. The expression size()-1 is the position of the last character, the period,
which is erased. The append() function installs three exclamation points at the end of the 
sentence. In this version of the function the first argument is the number of characters to
append, and the second is the character to be appended.
At the end of the program we show an idiom you can use to replace multiple instances of a
substring with another string. Here, in a while loop, we look for the space character ‘ ‘ using
find(), and replace each one with a slash using replace().
We start with s1 containing the string “Quick! Send for Count Graystone.” After these
changes, the output of SSTRCHNG is
s1: Don’t/send/for/Lord/Graystone!!! 
*/