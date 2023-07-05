// Just like declaring member functions as virtual, destructors can be declared as virtual, whereas
// constructors can not be virtual. Virtual Destructors are controlled in the same way as virtual
// functions. When a derived object pointed to by the base class pointer is deleted, destructor of the
// derived class as well as destructor of all its base classes are invoked. If destructor is made as non
// virtual destructor in the base class, only the base class’s destructor is invoked when the object is
// deleted

#include<iostream>
#include<string.h>
using namespace std;

class father{
    protected:
        char *fname;

    public:
        father(char *name){
            fname = new char(strlen(name) + 1);
            strcpy(fname, name);
        }

        virtual ~father(){
            delete fname;
            cout<<"~father is invoked";
        }

        virtual void show(){
            cout <<"father name: "<< fname;
        }
};

class son : public father{
    protected:
        char *s_name;

    public:
        son(char *fname, char *sname) : father(fname){
            sname = new char[strlen(sname) + 1];
            strcpy(s_name, sname);
        }

        ~son(){
            delete s_name;
            cout <<"~son() is invoked"<< endl;
        }

        void show(){
            cout <<"Father's name"<< fname;
            cout <<"Son's name : "<< s_name;
        }
};

int main(){
    father *basep;
    basep = new father("mona");

    cout <<"basep points to base object… ";
    basep->show();
    delete basep;
    basep = new son("sona", "mona");
    cout <<"base points to derived object…";
    basep->show();
    delete basep;
}