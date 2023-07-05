// int max(int a,int b); // Returns maximum of two integers float 
// max(float a,float b); // Return maximum of two floats char 
// max(char a,char b); // Returns maximum of two characters 
// (this is called as function overloading)
// But, instead of writing three different functions as above, C++ provided the facility called "Templates".

// With the help of templates you can define only one common function as follows:
// T max(T a,T b); // T is called generic data type



/*

Templates are of 2 types
a) Function Templates
b) Class Templates

*/

/*
a) Function Templates --> The templates declared for functions are called as function templates. A function template defines how 
an individual function can be constructed

Syntax -->
    template < class type,………>
    ret _type fun_ name(arguments)
    {
    -----------------// body of the function
    -----------------
    }

b) Class Templates --> The templates declared for classes are called class templates. A class template specifies how 
individual classes can be constructed similar to the normal class specification. These classes model a 
generic class which support similar operations for different data types. General Form of a Class 
Template

Syntax --> 
    The syntax for defining an object of 
    a template class is:
    classname<type> objectname(arglist);
---------------------------------------------------
    template <class T>
    class class-name
    {
    …….
    …….
    };

*/