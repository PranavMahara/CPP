#include<iostream>
#include<conio.h>
using namespace std;

class Worker{
    int age;
    string name;

    public:
        void get(){
            cout << "Your name please";
            cin >> name;
            cout << "Your age please";
        }

        void show(){
            cout << "My name is : " <<name<< " My age is : " <<age;
        }        
};

class Manager : public Worker{
    int now;

    public:
        void get(){
            Worker :: get(); 
            cout << "No. of workers under you: "; 
            cin >> now;
        }

        void show(){
            Worker :: show (); 
            cout << "In no. of workers under me are: "<< now;
        }
};

class CEO : public Manager{
    int nom; 

    public:
        void get(){
            Manager :: get ( ) ;
            cout << "No. of Managers under you are: ";
            cin >> nom;
        }
        void show(){
            cout << "In the no. of Managers under me are: ";
            // cout << nom;
        }
};

int main ( ){
    CEO cl ;
    cl.get();
    cl.show() ;

    return 0;
}
