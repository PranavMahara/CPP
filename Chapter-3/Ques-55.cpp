#include <iostream>
using namespace std;

class Bank{
    private:
        int AccNo;
        char Name[30];
        long Balance;

    public:
        void OpenAccount(){
            cout << "Enter Account Number: ";
            cin >> AccNo;
            cout << "Enter Name: ";
            cin >> Name;
            cout << "Enter  Balance: ";
            cin >> Balance;
        }

        void ShowAccount(){
            cout << "Account Number: " << AccNo << endl;
            cout << "Name: " << Name << endl;
            cout << "Balance: " << Balance << endl;
        }

        void Deposit(){
            long amt;
            cout << "Enter Amount U want to deposit? ";
            cin >> amt;
            Balance = Balance + amt;
        }

        void Withdrawal(){
            long Amount;
            cout << "Enter Amount U want to withdraw? ";
            cin >> Amount;
            if (Amount <= Balance){
                Balance = Balance - Amount;
            }

            else{
                cout << "Less Balance..." << endl;
            }    
        }

        int Search(int a){
            if (AccNo == a) {
                ShowAccount();
                return (1);
            }
            return (0);
        }
};

int main(){
    Bank C[3];

    int found = 0, a, ch, i;
    for (i = 0; i <= 2; i++) {
        C[i].OpenAccount();
    }

    do {
        // display options
        cout << "1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        // user input
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: 
                for (i = 0; i <= 2; i++) {
                    C[i].ShowAccount();
                }
                break;

            case 2: 
                cout << "Account Number? ";
                cin >> a;
                for (i = 0; i <= 2; i++) {
                    found = C[i].Search(a);
                    if (found)
                        break;
                }
                if (!found)
                    cout << "Record Not Found" << endl;
                break;

            case 3: 
                cout << "Account Number To Deposit Amount? ";
                cin >> a;
                for (i = 0; i <= 2; i++) {
                    found = C[i].Search(a);
                    if (found) {
                        C[i].Deposit();
                        break;
                    }
                }
                if (!found)
                    cout << "Record Not Found" << endl;
                break;

            case 4: 
                cout << "Account Number To Withdraw Amount? ";
                cin >> a;
                for (i = 0; i <= 2; i++) {
                    found = C[i].Search(a);
                    if (found) {
                        C[i].Withdrawal();
                        break;
                    }
                }
                if (!found)
                    cout << "Record Not Found" << endl;
                break;

            case 5: 
                cout << "Have a nice day" << endl;
                break;

            default:
                cout << "Wrong Option" << endl;
            }

    } while (ch != 5);

    return 0;
}