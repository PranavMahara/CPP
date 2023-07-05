// DYNAMIC CONSTRUCTOR:-
// The constructors can also be used to allocate memory while creating objects .
// This will enable the system to allocate the right amount of memory for each object when the objects
// are not of the same size, thus resulting in the saving of memory.
// Allocate of memory to objects at the time of their construction is known as dynamic
// constructors of objects. The memory is allocated with the help of new operator.

#include<iostream>
#include<string>
using namespace std;

class string{
    char *name;
    int length;

public:
    string(){
        length = 0;
        name = new char[length + 1]; /* one extra for \0 */
    }

    string(char *s){ // constructor 2
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }

    void display(){
        cout << name << endl;
    }

    void join(string &a, string &b){
        length = a.length + b.length;
        delete name;
        name = new char[length + 1]; /* dynamic allocation */
        strcpy(name, a.name);
        strcat(name, b.name);
    }
};
int main(){
    char *first = "Joseph";
    string name1("first"), name2("Louis"), name3("LaGrange"), s1, s2;
    
    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
}
