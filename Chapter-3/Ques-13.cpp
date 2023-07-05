#include <iostream>
using namespace std;

// class
class Bank {
private:
    int Acc, Bal;
    string Name;

public:
    void OpenAccount(){
        cout << "Please Enter Account Number: ";
        cin >> Acc;

        cout<<"Please enter your name --> ";
        cin >> Name;

        cout<<"Please enter your balance --> ";
        cin >> Bal;
    }

    void ShowAccount(){
        cout << "Account Number is " << Acc << endl;
        cout << "Name is "<< Name << endl;
        cout << "Balance is " << Bal << endl;
    }
    
    void Deposit(){
        int Amount;
        cout<<"Please enter the amount to be deposit - ";
        cin >> Amount;
        Bal = Bal + Amount;
    }

    void Withdrawal(){
        long Amount;
        cout<<"Please enter the amount to be withdraw - ";

        cin >> Amount;
        if (Amount <= Bal){
            Bal = Bal - Amount;
        }
        else{
            cout << "Not enough Balance" << endl;
        }
    }
    int Search(int);
};

int Bank :: Search(int a){
    if (Acc == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}

int main(){
    Bank acc[2];

    int found = 0, a, p;
    for (int i = 0; i <2; i++) {
        acc[i].OpenAccount();
    }

    do {
        cout<<"1: Display All"<<endl;
        cout<<"2: By Account No"<<endl;
        cout<<"3: Deposit"<<endl;
        cout<<"4: Withdraw"<<endl;
        cout<<"5: Exit"<<endl;

        cout << "Enter --> ";
        cin >> p;

        switch (p) {
        case 1: 
            for (int i = 0; i <= 2; i++) {
                acc[i].ShowAccount();
            }
            break;
        case 2: 
            cout << "Account No. --> ";
            cin >> a;
            for (int i = 0; i < 2; i++) {
                found = acc[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: 
            cout << "Enter the account money to deposit money --> ";
            cin >> a;
            for (int i = 0; i < 2; i++) {
                found = acc[i].Search(a);
                if (found) {
                    acc[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4:
            cout << "Enter the account number to withdraw money --> ";
            cin >> a;
            for (int i = 0; i < 2; i++) {
                found = acc[i].Search(a);
                if (found) {
                    acc[i].Withdrawal();
                    break;
                }
            }
            if (!found){
                cout << "Record Not Found" << endl;
            }
            break;
        }
    } while (p != 5);
    return 0;
}