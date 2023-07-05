// Write a program in C++ which creates a multilevel inheritance 
// hierarchy of Person, Employee and Teacher classes and creates instances 
// of each class using new and stores them in an array of Person 

#include<iostream>
using namespace std;

class person{
    protected:
        int age;
        string name;

    public:
        void get_p(){
            cout<<"Enter name and age --> ";
            cin>>name>>age;
        }

        void show(){
            cout<<"Name --> "<<name<<endl;
            cout<<"Age --> "<<age<<endl;
        }
};

class Employee : public person{
    protected:
        float salary;

    public:
        void get_e(){
            cout<<"Enter salary --> "<<endl;
            cin>>salary;
        }

        void showw(){
            cout<<"Salary --> "<<salary<<endl;
        }
};

class Teacher : public Employee{
    protected:
        string area;

    public:
        void getT(){
            cout<<"Enter Research --> ";
            cin>>area;
        }

        void Tshow(){
            show();
            showw();
            cout<<"Research --> "<<area<<endl;
        }
};

int main(){
    person *p[3];
    p[0]=new person();
    p[0]->get_p();
    p[0]->show();
    p[1]=new Employee();
    // acess only the members of derived type inherited from base
    p[1]->get_p();
    p[1]->show();
    // get full access of the entire derived class using typecast
    ((Employee *)p[1])->get_e();
    ((Employee *)p[1])->showw();
    p[2]=new Teacher();
    p[2]->get_p();
    ((Teacher *)p[2])->get_p();
    ((Teacher *)p[2])->get_e();
    ((Teacher *)p[2])->getT();
    ((Teacher *)p[2])->Tshow();


    return 0;
}