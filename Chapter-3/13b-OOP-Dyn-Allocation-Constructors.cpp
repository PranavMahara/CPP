#include<iostream>
using namespace std;

class Deposit{
    int principal;
    int years;
    float rate;
    float retval;

    public:
        Deposit(){} // This is must because agar hum p, y, r nahi de paye tab bhi ye chale // If you remove Deposit(){} Then compiler error!!
        Deposit(int p, int y, float r); // if r is in decimal like interest rate is 0.04
        Deposit(int p, int y, int r); // if r is in percent like interest rate is 13 percent 
        void show(){
            cout<<"Principal amount was "<<principal<<" and return is "<<retval<<" for "<<years<<" years"<<endl;
        }
};

Deposit :: Deposit(int p, int y, float r){
    principal = p;
    years = y;
    rate = r;

    retval = principal;

    for(int i=0; i<y; i++){
        retval = retval*(1+rate);
    }
}

Deposit :: Deposit(int p, int y, int r){
    principal = p;
    years = y;
    rate = float(r)/100;

    retval = principal;

    for(int i=0; i<y; i++){
        retval = retval*(1+rate);
    }
}

int main(){
    Deposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of p, y, r --> ";
    cin>>p>>y>>r;

    bd1 = Deposit(p, y ,r); // isme r decimal mein daal ke dekho
    bd1.show();

    cout<<"Enter the value of p, y, R --> ";
    cin>>p>>y>>R;

    bd2 = Deposit(p, y ,R); // isme r percent mein :)
    bd2.show();



    return 0;
}