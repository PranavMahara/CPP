#include<iostream>
using namespace std;

int* multiply(int *a, int *b){
    int c = *a * *b;
    return &c;

}

int main(){
    int a = 3, b = 5;
    int *c = multiply (&a, &b);
    cout<<"The Product is "<<*c<<endl;
    
    return 0;
}
// Error Aajega

// When multiply() is called, the execution of main() pauses and memory is now allocated for the execution of multiply(). After its execution is completed, the memory allocated to multiply() is deallocated.
// Therefore, though c ( local to main()) stores the address of the product, the data there is not guaranteed since that memory has been deallocated.
// So does that mean pointers cannot be returned by a function? No!
// We can do two things. Either store the address in the heap or global section or declare the variable to be static so that their values persist.
// Static variables can simply be created by using the keyword static before data type while declaring the variable.
// To store addresses in heap, we can use library functions malloc() and calloc() which allocate memory dynamically.