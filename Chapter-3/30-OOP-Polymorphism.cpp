#include<iostream>
using namespace std;

// Polymorphism means one name and multiple forms
// See Docx File

class BaseClass{
    public:
        int var_base;
        
        void virtual display(){
            cout<<"Displaying Base CLass Variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
        public:
        int var_derived;
        
        void display(){
            cout<<"Displaying Base Class Variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived CLass Variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass obj_base;
    DerivedClass obj_derived;

    BaseClass *base_class_pointer = &obj_derived; // Pointing base class pointer to derived class
    // Agar aapka base-class ka pointer hai aapne usko derived class se bhi derived karadiya toh aap agar pointer se display run karoge toh base class ka run hoga 
    // base_class_pointer->var_base = 34;
    cout<<endl;
    base_class_pointer->display();
    // object toh derived class ka hai but pointer toh base class ka hai so display base class ka hoga

    // base_class_pointer->var_derived = 44   //Error aajega

    DerivedClass *derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 88;
    // derived_class_pointer->display();
    // derived class ka pointer hai toh pointer ne Derived-Class ke function se bind kar diya
    derived_class_pointer->var_base = 98;
    derived_class_pointer->display();
    return 0;
}