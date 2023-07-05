// Namespace aliasing
// Existing namespaces can be aliased with new names, with the following syntax:
// namespace new_name = current_name;



// The std namespace
// All the entities (variables, types, constants, and functions) of the standard C++ library are declared 
// within the std namespace. Most examples in these tutorials, in fact, include the following line:
// using namespace std;
// This introduces direct visibility of all the names of the std namespace into the code. This is done in 
// these tutorials to facilitate comprehension and shorten the length of the examples, but many 
// programmers prefer to qualify each of the elements of the standard library used in their programs. 
// For example, instead of:
// cout << "Hello world!";
// It is common to instead see:
// std::cout << "Hello world!";

// Whether the elements in the std namespace are introduced with using declarations or are fully 
// qualified on every use does not change the behavior or efficiency of the resulting program in any 
// way. It is mostly a matter of style preference, although for projects mixing libraries, explicit 
// qualification tends to be preferred.