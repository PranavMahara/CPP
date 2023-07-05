// Initializing Nested Structures
/*
How do you initialize a structure variable that itself contains structures? The following statement initializes the variable dining to the same values it is given in the ENGLAREA program:
Room dining = { {13, 6.5}, {10, 0.0} };
Each structure of type Distance, which is embedded in Room, is initialized separately.
Remember that this involves surrounding the values with braces and separating them with
commas. The first Distance is initialized to
{13, 6.5}
Chapter 4 144
05 3087 CH04 11/29/01 2:23 PM Page 144
and the second to
{10, 0.0}
These two Distance values are then used to initialize the Room variable; again, they are 
surrounded with braces and separated by commas.
*/



// Why use Nesting of Structures?



// Diff between Structures and Classes
/*
                Class                                                   Structure

Members of a class are private by default.	            Members of a structure are public by default. 
Memory allocation happens on the heap.	                Memory allocation happens on a stack.
It is a reference type data type.	                    It is a value type data type.
It is declared using the class keyword.	                It is declared using the struct keyword.
*/