// What happens if the parameter in the sample function strToUpper() is
// declared as a string & instead of a string?

// The call to function strToUpper() is left unchanged. But instead of passing by
// reference, a passing by value occurs, i.e., the function manipulates a local copy.
// Thus, only a local copy of the string is changed in the function, but the string in
// the calling function remains unchanged.