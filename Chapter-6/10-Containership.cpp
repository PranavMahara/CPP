// Containership --> When a class contains objects of another class or its members, this kind of relationship is
// called containership or nesting and the class which contains objects of another class as its members is
// called as container class.

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

const int len = 80;

class employee{
    private:
        char name[len];
        int number;

    public:
        void get_data(){
            cout << "Enter employee name: ";
            cin >> name;
            cout << "Enter employee number: ";
            cin >> number;
        }

        void put_data(){
            cout << "Employee name: " << name<<endl;
            cout << "Employee number: " << number<<endl;
        }
};

class manager{
    private:
        char dept[len];
        int numemp;
        employee emp;

    public:
        void get_data(){
            emp.get_data();
            cout << "Enter department: ";
            cin >> dept;
            cout << "Enter number of employees: ";
            cin >> numemp;
        }
        void put_data(){
            emp.put_data();
            cout << "Department: " << dept<<endl;
            cout << "Number of employees: " << numemp<<endl;
        }
};

class scientist{
    private:
        int pubs, year;
        employee emp;

    public:
        void get_data(){
            emp.get_data();
            cout << "Number of publications: ";
            cin >> pubs;
            cout << "Year of publication: ";
            cin >> year;
        }

        void put_data(){
            emp.put_data();
            cout << "Number of publications: " << pubs;
            cout << "Year of publication: " << year;
        }
};

int main(){
    manager m1;
    scientist s1;
    int ch;

    do{
        cout << "1. Manager\n2. Scientist\n";
        cout << "Enter your choice: ";
        cin >> ch;
        
        switch (ch){
            case 1:
                cout << "\n Manager data:\n";
                m1.get_data();
                cout << "\n Manager data:\n";
                m1.put_data();
                break;
            case 2:
                cout << "\n Scientist data:\n";
                s1.get_data();
                cout << "\n Scientist data:\n";
                s1.put_data();
                break;
        }

        cout << "To continue Press 1 -> ";
        cin >> ch;

    } while (ch == 1);

    return 0;
}
