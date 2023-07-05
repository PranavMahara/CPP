// C++ Dynamic Memory Allocation
#include <iostream>
using namespace std;

int main() {
    // dynamically allocate memory
    int *pointInt = new int;
    float *pointFloat = new float;

    // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    // Or simply declaring
    // int* pointInt = new int (45);

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // deallocate the memory
    delete pointInt;
    delete pointFloat;

    return 0;
}