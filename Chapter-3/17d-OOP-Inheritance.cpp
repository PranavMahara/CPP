#include<iostream>
using namespace std;

class Worker{
    public:
        int age;
        string name;

        void get(){
            cout<<"Enter your name --> ";
            cin>>name;

            cout<<"Enter your age --> ";
            cin>>age;
        }  

        void show(){
            cout<<"Your name is "<<name<<" and age is "<<age<<endl;
        }
};

class Manager : public Worker{
    int now;
    public:
        void get(){
            Worker :: get();
            cout<<"Number of workers under you --> ";
            cin>>now;
            cin>>name>>age;
        }

        void show(){
            Worker :: show();

            cout<<"Number of workers under me are --> "<<now<<endl;
        }
};

int main(){
    Worker W1;
    Manager M1;

    M1.get();
    M1.show();
    return 0;
}