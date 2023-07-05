// Taking input from the user using cin.

#include <iostream>
using namespace std;
int main() {
    // Declaring a string object
    char str[50];
    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;
    return 0;
}
// Output:
// Enter a string: Welcome to coding ninjas
// You entered: Welcome

// Taking input from the user using cin.get.

#include <iostream>
using namespace std;
int main() {
    // Declaring a string object
    char str[50];
    cout << "Enter a string: ";
    cin.get(str, 50);
    cout << "You entered: " << str << endl;
    return 0;
}
// Output:
// Enter a string: Welcome to Coding Ninjas
// You entered: Welcome to Coding Ninjas

// Taking string as input.

#include <iostream>
using namespace std;
int main() {
    // Declaring a string object
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    return 0;
}

// Output:
// Enter a string: Welcome to coding ninjas
// You entered: Welcome to coding ninjas

// The advantage of using this method is that you need not declare the size of the string, 
// the size is determined at run time, so this is a better memory management method. 
// The memory is allocated dynamically at runtime, so no memory is wasted.