#include<iostream> 
using namespace std;

class account1; 

class account2{
    private:
        int balance; 
    public:
        account2(){ balance = 567;} 
        void showacc2(){
            cout<<"Balance In Account2 is: "<<balance<<endl; 
        }
        
        friend int transfer (account2 &acc2, account1 &acc1, int amount);
};

class account1{ 
    private:
        int balance; 

    public:
        account1(){ balance = 345;}
        void showacc1(){ 
            cout<<"balance in account1 :"<<balance<<endl; 
        } 
        friend int transfer (account2 &acc2, account1 &acc1 , int amount);
};

int transfer(account2 &acc2, account1 & acc1, int amount){
    if(amount<=acc1.balance){
        acc2.balance += amount; 
        acc1.balance -= amount;
    }
    
    else{
        return 0;
    }
}

int main(){
    account1 aa;
    account2 bb;
    cout<<"Balance in the accounts before transfer:" ;
    aa.showacc1( );
    bb.showacc2( );
    cout << "Amountt transferred from account1 to account2 is:";
    cout<<transfer(bb, aa, 100)<<endl;

    cout<< "Balance in the accounts after the transfer:";
    aa.showacc1();
    bb.showacc2();
    return 0;
}
