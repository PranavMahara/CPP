// A warehouse management program needs a class to represent the articles in
// stock.
//      ■   Define a class called Article for this purpose using the data members
//          and methods shown opposite. Store the class definition for Article in a
//          separate header file. Declare the constructor with default arguments for
//          each parameter to ensure that a default constructor exists for the class.
//          Access methods for the data members are to be defined as inline. Negative prices must not exist. If a negative price is passed as an argument,
//          the price must be stored as 0.0.

//      ■   Implement the constructor, the destructor, and the method print() in a
//          separate source file. Also define a global variable for the number of
//          Article type objects.
//          The constructor must use the arguments passed to it to initialize the data
//          members, additionally increment the global counter, and issue the message
//          shown opposite.
//          The destructor also issues a message and decrements the global counter.
//          The method print() displays a formatted object on screen.After
//          outputting an article, the program waits for the return key to be pressed.

//      ■   The application program (again use a separate source file) tests the Article class. Define four objects belonging to the Article class type:
//          1. A global object and a local object in the main function.
//          2. Two local objects in a function test() that is called twice by main().
//          One object needs a static definition.The function test() displays
//          these objects and outputs a message when it is terminated.
//          Use articles of your own choice to initialize the objects.Additionally, call
//          the access methods to modify individual data members and display the
//          objects on screen.
//      ■   Test your program. Note the order in which constructors and destructors are called.
// Supplementary question: Suppose you modify the program by declaring a function
// called test() with a parameter of type Article and calling the function with
// an article type object.The counter for the number of objects is negative after
// running the program.Why?