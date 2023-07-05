#include <iostream>
using namespace std;
#include <conio.h> //for getche()
enum itsaWord { NO, YES }; //NO=0, YES=1

int main(){
    itsaWord isWord = NO; 
    
    char ch = 'a'; 
    int wordcount = 0;
    cout << "Enter a phrase:\n";
    do {
        ch = getche(); 
        if(ch==' ' || ch=='\r'){
            if( isWord == YES ){
                wordcount++; 
                isWord = NO;
            }
        } 
        else
        if( isWord == NO ) 
        isWord = YES; 
    } while( ch != '\r' ); 
    cout << "\n---Word count is " << wordcount << "---\n";

    return 0;
}

// The program cycles in a do loop, reading characters from the keyboard. It passes over (nonspace) characters until it finds a space. At this point it counts a word. Then it passes over
// spaces until it finds a character, and again counts characters until it finds a space. Doing this
// requires the program to remember whether it’s in the middle of a word, or in the middle of a
// string of spaces. It remembers this with the enum variable isWord. This variable is defined to be
// of type itsaWord. 

// Variables of type itsaWord have only two possible values: NO and YES. Notice that the list
// starts with NO, so this value will be given the value 0—the value that indicates false. (We could
// also use a variable of type bool for this purpose.

// The isWord variable is set to NO when the program starts. When the program encounters the
// first nonspace character, it sets isWord to YES to indicate that it’s in the middle of a word. It
// keeps this value until the next space is found, at which point it’s set back to NO. Behind the
// scenes, NO has the value 0 and YES has the value 1, but we avoid making use of this fact. We
// could have used if(isWord) instead of if(isWord == YES), and if(!isWord) instead of
// if(isWord == NO), but this is not good style.
// Note also that we need an extra set of braces around the second if statement in the program,
// so that the else will match the first if.
// Another approach to a yes/no situation such as that in WDCOUNT is to use a variable of type
// bool. This may be a little more straightforward, depending on the situation