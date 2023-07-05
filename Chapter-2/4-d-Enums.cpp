// Enumerator Data Types:
// An enumerated data type is another user defined type which provides a way for 
// attaching names to number, these by increasing comprehensibility of the code. The enum keyword 
// automatically enumerates a list of words by assigning them values 0,1,2 and soon. This facility 
// provides an alternative means for creating symbolic.


// Example:
//     enum shape{circle,square,triangle}
//     enum colour{red,blue,green,yellow}
//     enum position {off,on}


// The enumerated data types differ slightly in C++ when compared with ANSI C. In C++, the 
// tag names shape, colour, and position become new type names. That means we can declare new 
// variables using the tag names.

// Example:
//     Shape ellipse;//ellipse is of type shape 
//     colour background ; // back ground is of type colour


// ANSI C defines the types of enums to be ints. In C++,each enumerated data type retains its 
// own separate type. This means that C++ does not allow an int value to be automatically converted to 
// an enum

// Example: 
//     colour background =blue; //vaid
//     colour background =7; //error in c++
//     colour background =(colour) 7;//ok

// int c=red ;//valid, colour type promoted to int


// By default, the enumerators are assigned integer values starting with 0 for the first 
// enumerator, 1 for the second and so on. We can also write
//     enum color {red, blue=4,green=8};
//     enum color {red=5,blue,green};

// C++ also permits the creation of anonymous enums ( i.e, enums without tag names)
// Example:
//      enum{off,on};

// Here off is 0 and on is 1.these constants may be referenced in the same manner as regular constants.
// Example:
//     int switch-1=off;
//     int switch-2=on;
// ANSI C permits an enum defined with in a structure or a class, but the enum is 
// globally visible. In C++ an enum defined with in a class is local to that class.

