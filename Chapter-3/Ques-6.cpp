// Write a probram with a mother class animal.
// Inside it define a name and an age variables, and set_value() function.
// Then create two bases variables Zebra and Dolphin which write a message telling the age, the name
// and giving some extra information (e.g. place of origin).

#include <iostream>
#include <cstring>
using namespace std;

class Animal{
    protected:
        int age;
        string name;

    public:
        void set_data(int a, string b){
            age = a;
            name = b;
        }
};

class Zebra : public Animal{
    public:
        void message_zebra(){
            cout << "The zebra named " << name << " is " << age << "years old. The zebra comes from Africa. "<<endl;
        }
};

class Dolphin : public Animal{
    public:
        void message_dolphin(){
            cout << "The dolphin named " << name << " is " << age << "years old. The dolphin comes from New Zeland."<<endl;
        }
};

int main(){
    Zebra zeb;
    Dolphin dol;
    string n1 = "Abcd";
    string n2 = "Efgh";

    zeb.set_data(5, n1);
    dol.set_data(2, n2);

    zeb.message_zebra();
    dol.message_dolphin();

    return 0;
}