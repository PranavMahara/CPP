#include <iostream>
using namespace std;
//specify enum type
enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main(){
    days_of_week day1, day2; 
    day1 = Mon; 
    day2 = Thu; 
    int diff = day2 - day1; 
    cout << "Days between = " << diff << endl;
    
    if(day1 < day2){ 
        cout << "Day1 comes before Day2\n";
    }
    return 0;
}

// Enumerations are treated internally as integers. This explains why you can perform arithmetic
// and relational operations on them. Ordinarily the first name in the list is given the value 0, the
// next name is given the value 1, and so on. In the DAYENUM example, the values Sun through
// Sat are stored as the integer values 0–6.
// Arithmetic operations on enum types take place on the integer values. However, although the
// compiler knows that your enum variables are really integers, you must be careful of trying to
// take advantage of this fact. If you say
// day1 = 5;
// the compiler will issue a warning (although it will compile). It’s better to forget—whenever
// possible—that enums are really integers.


// Structures should not be confused with enumerations. Structures are a powerful and flexible
// way of grouping a diverse collection of data into a single entity. An enumeration allows the
// definition of variables that can take on a fixed set of values that are listed (enumerated) in the
// type’s declaration.