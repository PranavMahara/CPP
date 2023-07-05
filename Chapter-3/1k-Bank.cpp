#include <iostream>
using namespace std;

class bank{
    int balance;
    int num;

    public:
        void getdata(){
            cout << "give balance";
            cin >> balance;
            cin >> num;
        }

        void tranfer(int i){
            balance -= i;
        }

        void receive(int i){
            balance += i;
        }

        void display(){
            cout << "the balance for the bank account is:";
            cout << balance << endl;
        }
};

int main(){
    bank b1;
    bank b2;
    b1.getdata();
    b2.getdata();

    int ii = 100;
    b1.display();
    b2.display();

    b1.tranfer(ii);
    b2.receive(ii);

    b1.display();
    b2.display();

    return 0;
}