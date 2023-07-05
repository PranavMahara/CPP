// Write a c++ class called 'student' with

// Data members:
// name(char type),
// marks1,marks2 (integer type)
// The program asks the user to enter name and marks. Then calc_media() calculates the media note and disp() display name and total media mark on screen in different lines.

#include<iostream>
using namespace std;

class student{
    string name;
    int marks1, marks2;

    public:
        void ask(){
            cout<<"Enter the name --> ";
            cin>>name;
            cout<<"Enter the marks for subject 1 and subject 2 --> ";
            cin>>marks1>>marks2;
        }

        void display(){
            cout<<"Total marks of "<<name<<" are "<<(marks1+marks2)<<endl;
        }
};

int main(){
    student arjun;
    arjun.ask();
    arjun.display();
    return 0;
}