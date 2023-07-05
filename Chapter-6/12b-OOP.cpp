namespace myNamespace
{
 int a, b;
}
// In this case, the variables a and b are normal variables declared within a namespace called 
// myNamespace.
// These variables can be accessed from within their namespace normally, with their identifier (either a
// or b), but if accessed from outside the myNamespace namespace they have to be properly qualified 
// with the scope operator ::. For example, to access the previous variables from outside myNamespace
// they should be qualified like:
// 1
// 2
// myNamespace::a
// myNamespace::b 