// The #define derivative
// Although the construction is not recommended in C++, constants can also be specified using
// the preprocessor directive #define. This directive sets up an equivalence between an identifier
// and a text phrase. For example, the line
// #define PI 3.14159
// appearing at the beginning of your program specifies that the identifier PI will be replaced by
// the text 3.14159 throughout the program. This construction has long been popular in C.
// However, you can’t specify the data type of the constant using #define, which can lead to program bugs; so even in C #define has been superseded by const used with normal variables.
// However, you may encounter this construction in older programs.