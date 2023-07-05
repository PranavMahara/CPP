#include <iostream>
using namespace std;

int main(){
    const int DAYS = 7; 
    const int MAX = 10; 
    
    char star[DAYS][MAX] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    for(int j=0; j<DAYS; j++) 
        cout << star[j] << endl;
    return 0;
}

// Since a string is an array, it must be true that star—an array of strings—is really a twodimensional array. The first dimension of this array, DAYS, tells how many strings are in the
// array. The second dimension, MAX, specifies the maximum length of the strings (9 characters
// for "Wednesday" plus the terminating null makes 10).

// Notice that some bytes are wasted following strings that are less than the maximum length.
// This efficiency can be removed by using pointers