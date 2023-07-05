#include<iostream>
#include<conio.h>
using namespace std;

class employee{
    int code;
    char name[20];

    public:
        virtual void getdata();
        virtual void display();
};

class grade : public employee{
    char grd[90];
    float salary;

    public:
        void getdata();
        void display();
};

void employee ::getdata(){}
void employee::display(){}

void grade :: getdata(){
    cout << "Enter employee's grade --> ";
    cin >> grd;
    cout << "enter the salary --> " ;
    cin >> salary;
}
void grade :: display(){
    cout<<" Grade salary "<<endl;
    cout<<grd<< " "<< salary<< endl;
}

int main(){
    employee *ptr;
    grade obj;
    ptr = &obj;
    ptr->getdata();
    ptr->display();

    return 0;
}