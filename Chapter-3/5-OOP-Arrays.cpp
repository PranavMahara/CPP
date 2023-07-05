#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
        void setID(){
            salary = 122;
            cout<<"Enter the ID of employee: ";
            cin>>id;
        }

        void getID(){
            cout<<"ID of employee is "<<id<<endl;
        }
};

int main(){
    Employee fb[4];

    for(int i=0; i<4; i++){
        fb[i].setID();
        fb[i].getID();
    }
    return 0;
}

