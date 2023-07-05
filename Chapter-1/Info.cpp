// Comma operator(,): It is a binary operator that evaluates its first operand and discards the result. It then evaluates the second operand and returns this value.

// Example:

#include <iostream>
using namespace std;
int main() {
    int x, y;
    y = 100;
    x = (y + 10, 99 + y);
    cout << "With brackets value of x :" << x << endl;
    x = y + 10, 99 + y;
    cout << "Without brackets value of x :" << x;
    return 0;
}
// Output:
// With brackets value of x :199
// Without brackets value of x :110
//-----------------------------------------------------------
// Wild Pointers:
//  A pointer behaves like a wild pointer when declared but not initialized. So, they point to any random memory location.


// int *ptr; //wild pointer
// *ptr = 5;

//-----------------------------------------------------------
// Dangling Pointers:
// A dangling pointer is a pointer pointing to a memory location that has been freed (or deleted). There are three different ways where Pointer acts as a dangling pointer.

// a)Function Call

// The pointer pointing to the local variable becomes dangling when the local variable is not static.

#include<iostream>
using namespace std;
int* fun() {
    int x = 10;
    return &x;
}
int main() {
    int *p = fun();
    // p points to something which is not 
    // valid anymore 
    cout << *p;
    return 0;
}

// b) Deallocation of memory

// Deallocating a memory pointed by a pointer causes a dangling pointer.

#include<iostream>
using namespace std;
int main() {
    //dynamic memory allocation.
    int * p = (int * ) malloc(sizeof(int));
    //after calling free() p becomes a dangling pointer
    free(p);
    //now p no more a dangling pointer.
    p = NULL;
    return 0;
}

//  c) Variable goes out of scope

// When a pointer goes out of scope where it is valid, then it becomes a dangling pointer.

#include<iostream>
using namespace std;
int main() {
    int * ptr;
    {   int ch;
        ptr = & ch;
    }
    // Here ptr is dangling pointer
}

//-----------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    char * ptr;
    char Str[] = "abcdefg";
    ptr = Str;
    ptr += 2;
    cout << ptr;
    return 0;
}