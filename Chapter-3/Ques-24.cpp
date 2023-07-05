// Write a program in C++ to demonstrate the use of function overloading.

#include<iostream>
using namespace std;

class sample{
    public:
        int sum(int m, int n){
            return m+n;
        }

        double sum(double m, double n){
            return m+n;
        }

        int sum(int m){
            return m+2;
        }
};

int main(){
    sample one;
    cout<<one.sum(5)<<endl;
    cout<<one.sum(5.6, 7.8)<<endl;
    cout<<one.sum(5, 9)<<endl;
    return 0;
}
