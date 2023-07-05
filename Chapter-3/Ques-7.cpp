// Write program that ask for the numbers of elements in an array and then fill it in. Use new and delete.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array --> ";
    cin>>n;


    int *ptr = new int[n];
    int *ptrnew = ptr;

    for(int i=0; i<n; i++){
        cin>>*ptr;
        ptr++;
    }

    for(int i=0; i<n; i++){
        cout<<*ptrnew<<endl;
        ptrnew++;
        // delete[] ptr;
    }
    return 0;
}

// A dynamic array is quite similar to a regular array, but its size is modifiable during program runtime. DynamArray elements occupy a contiguous block of memory.
// Once an array has been created, its size cannot be changed. However, a dynamic array is different. A dynamic array can expand its size even after it has been filled.