#include<iostream>
using namespace std;

class bank{
    private:
        int acc_no;
        float balance;

    public:
        bank(){
            balance = 500;
        }

        void SetData(){
            cout<<"Enter the account number --> ";
            cin>>acc_no;
            cout<<"Enter the balance --> ";
            cin>>balance;
        }

        void display(){
            cout<<"Account Number --> "<<acc_no<<endl;
            cout<<"Balance --> "<<balance<<endl;
        }

        void transfer(float t, bank &tc);
};

void bank :: transfer(float t, bank &tc){
    balance = balance - t;
    tc.balance = tc.balance + t;
}

int main(){
    bank c1, c2;
    c1.SetData();
    c2.SetData();
    c1.display();
    c2.display();

    float money;
    cout<<"Enter the amount need to transfer from c1 to c2 --> ";
    cin>>money;
    c1.transfer(money, c2);

    c1.display();
    c2.display();
    return 0;
}