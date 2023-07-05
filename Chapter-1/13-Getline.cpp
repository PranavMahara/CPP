// getline() is a standard library function used to read a string or a line from an input stream.

// It is used when input strings with spaces between them or process multiple strings at once.

// The getline() function extracts characters from the input stream and appends them to the string object until the delimiting character is encountered. While doing so, the previously stored value in the string object str will be replaced by the input string, if any.

// Syntax - 1
// istream& getline(istream& is, string& str, char delim);

// Parameters:

// is: is an object of the istream class that tells the stream’s function the input that needs to be read.
// str: is the string object that stores the input after the stream’s reading process is finished.
// delim: defines the delimitation character, which commands the function to stop processing the input. The reading process will stop once the written code reads this command.


// Syntax - 2
// istream& getline (istream& is, string& str);
// The second declaration is almost the same as that of the first one. The only difference is that the latter have a delimitation character by defaulting a new line(\n)character.

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s;
    return 0;
}
