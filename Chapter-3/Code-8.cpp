// Strings as Class Members

#include <iostream>
#include <cstring> //for strcpy()
using namespace std;

class part{
    private:
        char partname[30]; 
        int y;    
        double cost;

    public:
        void setpart(char pname[], int pn, double c){
            strcpy(partname, pname);
            y = pn;
            cost = c;
        }

        void showpart(){
            cout << "\nName=" << partname;
            cout << ", number=" << y;
            cout << ", cost=$" << cost;
        }
};

int main(){
    part part1, part2;
    part1.setpart("handle bolt", 4473, 217.55); 
    part2.setpart("start lever", 9924, 419.25);
    cout << "\nFirst part: ";
    part1.showpart(); 
    cout << "\nSecond part: ";
    part2.showpart();
    cout << endl;

    return 0;
}

// In the setpart() member function, we use the strcpy() string library function to copy the
// string from the argument pname to the class data member partname. Thus this function serves
// the same purpose with string variables that an assignment statement does with simple variables. (A similar function, strncpy(), takes a third argument, which is the maximum number
// of characters it will copy. This can help prevent overrunning the array.)
// Besides those we’ve seen, there are library functions to add a string to another, compare
// strings, search for specific characters in strings, and perform many other actions.