// Only one entity can exist with a particular name in a particular scope. This is seldom a problem for 
// local names, since blocks tend to be relatively short, and names have particular purposes within 
// them, such as naming a counter variable, an argument, etc...
// But non-local names bring more possibilities for name collision, especially considering that libraries 
// may declare many functions, types, and variables, neither of them local in nature, and some of them 
// very generic.
// Namespaces allow us to group named entities that otherwise would have global scope into narrower 
// scopes, giving them namespace scope. This allows organizing the elements of programs into 
// different logical scopes referred to by names.

/*
The syntax to declare a namespaces is:
namespace identifier
{
 named_entities
}
Where identifier is any valid identifier and named_entities is the set of variables, types and 
functions that are included within the namespace. 

*/