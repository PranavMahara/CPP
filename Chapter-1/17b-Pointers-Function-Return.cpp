#include<iostream>
#include<cstdlib>
using namespace std;

// Solving the problem in 17-Pointers.cpp

// Using Malloc()

// int* multiply(int *a, int *b){
//     int *c = malloc(sizeof(int));
//     *c = *a * *b;

//     return c;
// }

int* multiply(int *a, int *b){
    static int c;
    c = *a * *b;
    return &c;
}

int main(){
    int a = 3, b = 5;
    int *c = multiply(&a, &b);
    cout<<"The Product is "<<*c<<endl;

    return 0;
}