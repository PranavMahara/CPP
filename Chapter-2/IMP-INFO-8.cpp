/*
State the reason that
enum isWord{ NO, YES };
is better than
enum isWord{ YES, NO };
*/
//  because false should be represented by 0


//  If you have three variables defined to be of type struct time, and this structure contains three int members, how many bytes of memory do the variables use together?
// 18 in 16-bit systems (3 structures times 3 integers times 2 bytes), or 36 in 32-bit systems


// Write a statement that sets the hrs member of the time2 structure variable equal to 11.
// time2.hrs = 11;


// Write a definition that initializes the members of time1—which is a variable of type struct time, as defined in Question 4—to hrs = 11, mins = 10, secs = 59.
// time time1 = { 11, 10, 59 };


// ****You can assign one structure variable to another, provided they are of the same type


// Write a statement that sets the variable temp equal to the paw member of the dogs member of the fido variable.
// temp = fido.dogs.paw;


// An enumeration brings together a group of  integers with user-defined names.