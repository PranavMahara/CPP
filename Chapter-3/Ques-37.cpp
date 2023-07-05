// Define a class with appropriate data members and member functions
// which opens an input and output file, checks each one for being open,
// and then reads name, age, salary of a person from the input file and
// stores the information in an object, increases the salary by a bonus of
// 10% and then writes the person object to the output file. It continues
// until the input stream is no longer needed.

#include <iostream>
#include <fstream>
using namespace std;

class Person{
        string name;
        int age;
        float salary;

    public:
        Person(string name, int age, float salary){
            this->name = name;
            this->age = age;
            this->salary = salary;
        }

        void display(){
            cout << this->name;
            cout << this->age;
            cout << this->salary;
        }

        void updateSalary(){
            this->salary = (this->salary) * 1.10;
        }

        void outFile(){
            ofstream fout;
            fout.open("personList");
            fout << this->name << endl;
            fout << this->age << endl;
            fout << this->salary << endl;
            fout.close();
        }
};

int main(){
    ifstream is("foo.txt");
    string name;
    int age;
    float salary;
    while (is >> name >> age >> salary);
    Person obj = Person(name, age, salary);
    obj.display();
    obj.updateSalary();
    obj.display();
    obj.outFile();

    return 0;
}