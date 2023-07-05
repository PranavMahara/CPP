#include <iostream>
#include <string.h> 
using namespace std;

class String{
    private:
        enum { SZ = 80 }; 
        char str[SZ];
    public:
        String(){ 
            strcpy(str, ""); 
        }
        String( char s[] ){ 
            strcpy(str, s); 
        }

        void display() const{ 
            cout << str; 
        }

        void getstr(){ 
            cin.get(str, SZ); 
        }

        bool operator == (String ss) const{
            return ( strcmp(str, ss.str)==0 ) ? true : false;
        }
};

int main(){
    String s1 = "yes";
    String s2 = "no";
    String s3;
    cout << "\nEnter 'yes' or 'no': ";
    s3.getstr(); 
    if(s3==s1)
    cout << "You typed yes\n";
    else if(s3==s2) 
    cout << "You typed no\n";
    else
    cout << "You didn’t follow instructions\n";
    return 0;
}

// The main() part of this program uses the == operator twice, once to see if a string input by the
// user is “yes” and once to see if it’s “no.” Here’s the output when the user types “yes”:
// Enter ‘yes’ or ‘no’: yes
// You typed yes
// The operator==() function uses the library function strcmp() to compare the two C-strings.
// This function returns 0 if the strings are equal, a negative number if the first is less than the
// second, and a positive number if the first is greater than the second. Here less than and greater
// than are used in their lexicographical sense to indicate whether the first string appears before
// or after the second in an alphabetized listing.
// Other comparison operators, such as < and >, could also be used to compare the lexicographical
// value of strings. Or, alternatively, these comparison operators could be redefined to compare
// string lengths. Since you’re the one defining how the operators are used, you can use any 
// definition that seems appropriate to your situation.