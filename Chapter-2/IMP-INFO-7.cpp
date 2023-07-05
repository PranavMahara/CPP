/*
4 Types of Scope

Local Scope:    A block in C++ is enclosed by a pair of curly braces i.e., ‘{‘ and ‘}’. The 
                variables declared within the body of the block are called local variables and can be used only 
                within the block. These come into existence when the control enters the block and get destroyed 
                when the control leaves the closing brace. You should note the variable(s) is/are available to all 
                the enclosed blocks within a block. 

Function Scope:     It pertains to the labels declared in a function i.e., a label can be used 
                    inside the function in which it is declared. So we can use the same name labels in different 
                    functions. 

File Scope :    If the declaration of an identifier appears outside all functions, it is available to all 
                the functions in the program and its scope becomes file scope.

Class Scope :   In C++, every class maintains its won associated scope. The class members are 
                said to have local scope within the class. If the name of a variable is reused by a class member, 
                which already has a file scope, then the variable will be hidden inside the class. Member 
                functions also have class scope. 

*/