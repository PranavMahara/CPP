// Unary – - operator overloading(using friend function):
#include<iostream>
using namespace std;

class abc{
    int m, n;

    public:
        abc(){
            m = 8;
            n = 9;
        }

        void show(){
            cout<<m<<n;
        }

        friend operator --(abc &p);
        operator -- (abc &p){
            --p.m;
            --p.n;
        }
};


int main(){
    
    return 0;
}