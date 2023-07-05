#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 8;

    float pi = 3.14;
    char ab = 'i';
    bool tr = true;

    // << is Insertion operator
    // >> is Extraction Operator
    cout<<"Hello I am going to print something "<<a<<". The value of b is "<<b<<"\n";
    // cout<<"\n"<<b;
    cout<<"\n";
    // cout<<pi;

    cout<<"The value of pi is: "<<pi<<"\n";

    cout<<"The value of character is: "<<ab;
    cout<<"\n"<<tr; // true so output 1 if false then output will be 0
    return 0;
}

// Our program examples so far have used four data types—int, char, float, and long. In 
// addition we’ve mentioned types bool, short, double, and long double

/*


Keyword                 Low               High            Digits of precision   Bytes of Memory
bool                false               true                    n/a                 1
char                –128                127                     n/a                 1
short               –32,768             32,767                  n/a                 2
int                 –2,147,483,648      2,147,483,647           n/a                 4
long                –2,147,483,648      2,147,483,647           n/a                 4
float               3.4 x 10^–38         3.4 x 10^38              7                   4
double              1.7 x 10^–308        1.7 x 10^308             15                  8

unsigned char           0               255                      -                  1
unsigned short          0               65,535                   -                  2
unsigned int            0               4,294,967,295            -                  4
unsigned long           0               4,294,967,295            -                  4

The unsigned types are used when the quantities represented are always positive—such as
when representing a count of something—or when the positive range of the signed types is not
quite large enough.

*/