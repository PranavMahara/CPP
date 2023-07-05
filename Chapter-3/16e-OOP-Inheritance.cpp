#include<iostream>
using namespace std;
// An instance of a derived class is an instance of the base class. 
// If you have a rule for what must happen when you construct an Animal, and you're constructing a Giraffe, then somehow you have to execute the rule for constructing an Animal. 
// In C++ that mechanism is "call a base class constructor".

// A derived class is the base class plus extra things the derived class adds.
// You still need some code that initializes the base class portion so you can add your extra parts on top. The call to the base constructor is where that initialization happens.
class first{
    int data;

    public:
        first(){} // Yeh ni karoge toh error aajega // Base cosntructor
        first(int x){
            data = x;
            cout<<"First class --> "<<data<<endl;
        }
};

class second : public first{
    int data2;

    public:
        second(){
            cout<<"Hello"<<endl;
        }
};

int main(){
    second a;
    return 0;
}

// Whenever we create an object of a class, the default constructor of that class is invoked automatically to initialize the members of the class. 
// If we inherit a class from another class and create an object of the derived class, 
// it is clear that the default constructor of the derived class will be invoked but before that the default constructor of all of the base classes will be invoke, 
// i.e the order of invocation is that the base class’s default constructor will be invoked first and then the derived class’s default constructor will be invoked.



// Why the base class’s constructor is called on creating an object of derived class?

// To understand this you will have to recall your knowledge on inheritance. What happens when a class is inherited from other? 
// The data members and member functions of base class comes automatically in derived class based on the access specifier but the definition of these members exists in base class only. 
// So when we create an object of derived class, all of the members of derived class must be initialized but the inherited members in derived class can only be initialized by the base class’s constructor as the definition of these members exists in base class only. 
// This is why the constructor of base class is called first to initialize all the inherited members. 