// Write a program in C++ which creates objects of Student class using default, overloaded and copy constructors.

#include <iostream>
#include <string.h>
using namespace std;

class student{
    private:
        string name;
        int age;

    public:
        student(){};

        student(string n){
            name = n;
            age = 0;
        }

        student(string n, int a){
            name = n;
            age = a;
        }

        student(student &s){
            name = s.name;
            age = s.age;
        }

        void show();
};

void student::show(){
    cout << "Name of student is:" << name << endl;
    cout << "Age of student is:" << age << endl;
}

int main(){
    student s2("XYZ");
    student s3("abc", 26);
    student s4(s3);
    s2.show();
    s3.show();
    s4.show();
    
    return 0;
}
