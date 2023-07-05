// When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.
// When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).

/*

Exception Handling consists of 3 keywords -->
try, throw and catch

    1) The try statement allows you to define a block of code to be tested for errors while it is being executed.
    2) The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
    3) The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

*/

// Try and catch come in pairs

/*
    try {
    // Block of code to try
    throw exception; // Throw an exception when a problem arise
    }
    catch () {
    // Block of code to handle errors
    }
*/

// Types of exceptions:There are two kinds of exceptions
// 1.Synchronous exceptions:Errors such as “Out-of-range index” and “over flow” are synchronous exceptions
// 2.Asynchronous exceptions: The errors that are generated by any event beyond the control of the program are called asynchronous exceptions