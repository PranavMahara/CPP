// C++ Function Overriding
// If base class and derived class have member functions with same name and arguments. If you create 
// an object of derived class and write code to access that member function then, the member function 
// in derived class is only invoked, i.e., the member function of derived class overrides the member 
// function of base class. This feature in C++ programming is known as function overriding.


// Accessing the Overridden Function in Base Class From Derived Class
// To access the overridden function of base class from derived class, scope resolution operator ::. For 
// example: If you want to access get_data() function of base class from derived class in above 
// example then, the following statement is used in derived class.

//      A::get_data; // Calling get_data() of class A.

// It is because, if the name of class is not specified, the compiler thinks get_data() function is calling 
// itself



// ABSTRACT CLASSES
// Abstract Class is a class which contains atleast one Pure Virtual function in it. Abstract classes are 
// used to provide an Interface for its sub classes. Classes inheriting an Abstract Class must provide 
// definition to the pure virtual function, otherwise they will also become abstract class.

// Characteristics of Abstract Class
//      1.  Abstract class cannot be instantiated, but pointers and refrences of Abstract class type can be 
//          created.
//      2.  Abstract class can have normal functions and variables along with a pure virtual function.
//      3.  Abstract classes are mainly used for Upcasting, so that its derived classes can use its 
//          interface.
//      4.  Classes inheriting an Abstract Class must implement all pure virtual functions, or else they 
//          will become Abstract too.

// Pure Virtual Functions
// Pure virtual Functions are virtual functions with no definition. They start with virtual keyword and 
// ends with = 0. Here is the syntax for a pure virtual function,
// virtual void f() = 0;