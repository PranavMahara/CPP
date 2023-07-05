// Program to show the hierarchical inheritance
// Another interesting application of inheritance is to use is as a support to a hierarchical design of a
// class program. Many programming problems can be cast into a hierarchy where certain features of
// one level are shared by many others below that level

#include <iostream>
#include <conio.h>
using namespace std;

class father{
    int Age;
    string name;

    public:
        void Get(){
            cout << "Father's name --> ";
            cin >> name;
            cout << "Father's age --> ";
            cin >> Age;
        }

        void Show(){
            cout << "Father's name is: " << name;
            cout << "Father's age is: " << Age;
        }
};

class son : public father{
    string name;
    int age;

    public:
        void Get(){
            father :: Get();

            cout << "Your (son) name please"
                 << "in";
            cin >> name;
            cout << "Your age please"
                 << "in";
            cin >> age;
        }
        void Show(){
            father :: Show();
            cout << "In my name is : " << name;
            cout << "In my age is : " << age;
        }
};


class daughter : public father{
    char name[15];
    int age;

    public:
        void Get(){
            father ::Get();
            cout << "your (daughter's) name please In";
            cin >> name;
            cout << "your age please In";
            cin >> age;
        }

        void Show(){
            Show();
            cout << "in my father name is: " << name << "In and his age is : " << age;
        }
};

int main(){
    son S1;
    daughter D1;
    S1.Get();
    D1.Get();
    S1.Show();
    D1.Show();
}
