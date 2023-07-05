// Write a C++ program to demonstrate the concepts of abstract class and inner class.

#include <iostream>
using namespace std;

class number{
    protected:
        int val;

    public:
        void setval(int i){
            val = i;
        }
        virtual void show() = 0;
};

class hextype : public number{
    public:
        void show()
        {
            cout << hex << val << endl;
        }
};

class dectype : public number{
    public:
        void show()
        {
            cout << val << endl;
        }
};

class octtype : public number{
    public:
        void show()
        {
            cout << oct << val << endl;
        }
};

int main(){
    dectype d;
    hextype h;
    octtype o;
    d.setval(20);
    d.show();
    h.setval(20);
    h.show();
    o.setval(20);
    o.show();
    return 0;
}

// inner class
#include <iostream>
#include <string.h>
using namespace std;

class student{
    private:
        string school;
        string degree;

    public:
        void getedu(){
            cout << "enter name of school or university:";
            cin >> school;
            cout << "enter the highest degree earned\n";
            cout << "highschool, bachelors, mastters, phd";
            cin >> degree;
        }
        void putedu() const
        {
            cout << "\n school or university:" << school;
            cout << "\n highest degree earned:" << degree;
        }
};

class employee{
    private:
        string name;
        unsigned long number;

    public:
        void getdata(){
            cout << "\n enter last name:";
            cin >> name;
            cout << "enter number:";
            cin >> number;
        }
        void putdata() const{
            cout << "\n Name:" << name;
            cout << "\n Number:" << number;
        }
};

class Manager{
    private:
        string title;
        double dues;
        employee emp;
        student stu;

    public:
        void getdata(){
            emp.getdata();
            cout << "enter title:";
            cin >> title;
            cout << "enter golf club dues:";
            cin >> dues;
            stu.getedu();
        }

        void putdata() const{
            emp.putdata();
            cout << "\n title:" << title;
            cout << "\n golf club dues:" << dues;
            stu.putedu();
        }
};

class scientist{
    private:
        int pubs;
        employee emp;
        student stu;

    public:
        void getdata(){
            emp.getdata();
            cout << "enter number of pubs:";
            cin >> pubs;
            stu.getedu();
        }
        void putdata() const{
            emp.putdata();
            cout << "\n number of publications:" << pubs;
            stu.putedu();
        }
};

class laborer{
    private:
        employee emp;

    public:
        void getdata()
        {
            emp.getdata();
        }
        void putdata() const
        {
            emp.putdata();
        }
};

int main(){
    Manager m1;
    scientist s1, s2;
    laborer l1;
    cout << endl;
    cout << "\n Enter data for manager 1";
    m1.getdata();
    cout << "\n Enter data for scientist 1";
    s1.getdata();
    cout << "\n Enter data for scientist 2";
    s2.getdata();
    cout << "\n Enter data for laborer 1";
    l1.getdata();
    cout << "\n data on manager1";
    m1.putdata();
    cout << "\n data on scientist1";
    s1.putdata();
    cout << "\n data on scientist2";
    s2.putdata();
    cout << "\n data on laborer 1";
    l1.putdata();
    cout << endl;
    
    return 0;
}