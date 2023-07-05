// Write a C++ program to demonstrate the use of scope resolution operator.

#include <iostream>
#include <string.h>
using namespace std;

class student{
    private:
        char name[20];
        int marks;

    public:
        void put();
        void get(char *n, int a);
};

void student::get(char *n, int a){
    strcpy(name, n);
    marks = a;
}

void student::put(){
    cout<< "Name is: "<<name<<endl;
    cout<< "Marks: "<<marks<<endl;
}

int main(){
    student s1;
    s1.get("XYZ", 56);
    s1.put();
    
    return 0;
}