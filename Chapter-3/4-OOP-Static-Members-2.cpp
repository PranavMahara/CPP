// Static Functions --> Functions that can only access Static Members
#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(){
            cout<<"Enter ID --> ";
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"The ID of the employee is "<<id<<" and employee number is "<<count<<endl;
        }

        static void getCount(){
            // cout<<id; // Error //static mein ID kyu print karna chahte ho bhaiya voh static ni hai
            cout<<"The value of count is"<<count<<endl;      
        }
};
int Employee :: count; // By default initialized as zero // If u want to initialize it as any number like say 1000 just write int Employee :: count = 1000;

int main(){
    Employee Arjun, Karan, Sanya;
    Arjun.setData();
    Arjun.getData();
    Employee::getCount();

    Karan.setData();
    Karan.getData();
    Employee::getCount();
    
    Sanya.setData();
    Sanya.getData();
    Employee::getCount();

    return 0;
}