#include<iostream>
using namespace std;

struct employee{ // we can also use typedef
    int ID;
    char favChar;
    float salary;
};

int main(){
    struct employee ATG;
    ATG.ID = 1;
    ATG.favChar = 'a';
    ATG.salary = 125545;

    cout<<ATG.salary<<endl;
    cout<<ATG.favChar<<endl;
    cout<<ATG.ID<<endl;
    return 0;
}

// Structure Variables in Assignment Statements
// As can be seen in PARTINIT, one structure variable can be assigned to another:
// part2 = part1;
// The value of each member of part1 is assigned to the corresponding member of part2. Since
// a large structure can have dozens of members, such an assignment statement can require the
// computer to do a considerable amount of work.
// Note that one structure variable can be assigned to another only when they are of the same
// structure type. If you try to assign a variable of one structure type to a variable of another type,
// the compiler will complain.

// A structure definition creates space in memory for a variable   ------>>> FALSE