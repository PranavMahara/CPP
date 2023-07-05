// A C++ program can be divided into different namespaces. A namespace is a part of the program in which certain names are recognized; outside of the namespace they’re unknown. The
// directive
// using namespace std;
// says that all the program statements that follow are within the std namespace. Various program
// components such as cout are declared within this namespace. If we didn’t use the using directive, we would need to add the std name to many program elements. For example, in the FIRST
// program we’d need to say
// std::cout << “Every age has a language of its own.”;
// To avoid adding std:: dozens of times in programs we use the using directive instead