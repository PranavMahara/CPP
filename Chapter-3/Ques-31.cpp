// Write a C++ program to show the use of destructors.

#include <iostream>
#include <string.h>
using namespace std;


class student{
    int count = 0, roll, age;
    string name;

    public:
        student(int r, int a, char *n);
        ~student();
        void get_details();
};

student :: student(int r, int a, char *z){
    count++;
    cout << "No. of objects created " << count << endl;
    age = r;
    roll = a;
    name = z;
}

student :: ~student(){
    cout << "No. of objects destroyed " << count << endl;
    count--;
}

void student :: get_details(){
    cout << "name " << name << endl;
    cout << "age " << age << endl;
    cout << "roll " << roll << endl;
}

int main(){
    student s1(1, 24, "XYZ");
    s1.get_details();
    student s2(2, 25, "ABC");
    s2.get_details();

    return 0;
}
