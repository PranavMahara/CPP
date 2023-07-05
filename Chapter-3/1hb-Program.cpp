#include<iostream>
using namespace std;

class A{
    int balance;

    public:
        A(){
            balance = 500;
        }

        void shift(A &a, A &b){
            a.balance = a.balance + 250;
            b.balance = b.balance - 250;
        }

        void show(){
            cout<<"Updated Balance --> "<<balance<<endl;
        }
};

int main(){
    A arjun, karan;
    arjun.shift(arjun, karan);
    arjun.show();
    karan.show();
    return 0;
}