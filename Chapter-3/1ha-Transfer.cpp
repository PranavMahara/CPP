#include<iostream>
using namespace std;

class Bank{
    int balance;

    public:
        void Inp_A(int x){
            balance = x;
            cout<<"Current Balance --> "<<balance<<endl;
        }

        void transfer(Bank &a, Bank &b){
            // cout<<a.balance<<" "<<b.balance;
            a.balance = a.balance + b.balance;   // b.balance = -5 (Updated becuase here a.balance changes to 15)
            b.balance = b.balance - a.balance;   // b.balance = 10-15 = -5
        }

        void show(){
            cout<<"Updated Balance --> "<<balance<<endl;
        }
};

int main(){
    Bank Acc1, Acc2;
    Acc1.Inp_A(5);
    Acc2.Inp_A(10);

    Acc1.transfer(Acc1, Acc2);

    Acc1.show();
    Acc2.show();
    
    return 0;
}