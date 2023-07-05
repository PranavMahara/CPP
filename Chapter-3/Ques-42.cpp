// Write a C++ program to demonstrate the use of pure virtual functions and virtual destructors.

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
        virtual ~number(){
            cout << "number object deleted" << endl;
        }
};

class hextype : public number{
    public:
        void show(){
            cout << hex << val << endl;
        }
        ~hextype(){
            cout << "hextype object deleted" << endl;
        }
};

class dectype : public number{
    public:
        void show(){
            cout << val << endl;
        }
        ~dectype(){
            cout << "dectype object deleted" << endl;
        }
};

class octtype : public number{
    public:
        void show(){
            cout << oct << val << endl;
        }
        ~octtype(){
            cout << "octtype object deleted" << endl;
        }
};

int main(){
    number *ptr;
    dectype d;
    hextype h;
    octtype o;
    ptr = &d;
    ptr->setval(20);
    ptr->show();
    ptr = &h;
    ptr->setval(20);
    ptr->show();
    ptr = &o;
    ptr->setval(20);
    ptr->show();

    return 0;
}
