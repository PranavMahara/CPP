#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char * a = "Hello\0World";
    cout << strlen(a) << endl;
    return 0;
}

// A ‘\0’ character terminates char*, so the string “Hello\0World” will be cut down to “Hello”.