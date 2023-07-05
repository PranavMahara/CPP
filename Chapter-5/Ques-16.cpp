// C++ Program to find sum of Array using function template

#include<iostream>
using namespace std;

template<typename T>
T summ(T *ptr, int size){
    T sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + ptr[i];
    }
    return sum;
}

int main(){
    int arr[] = {1, 3, 5, 7, 9};
    cout<<"The sum is "<<summ(arr, 5)<<endl;

    float ar[] = {1.3, 3.6, 5.75, 7.89, 9.345};
    cout<<"The sum is "<<summ(ar, 5)<<endl;

    return 0;
}