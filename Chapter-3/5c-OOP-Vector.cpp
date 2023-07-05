// The main program is the next one
#include<iostream>
using namespace std;

class complex{
    int a, b;

    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDatabySum(complex o1, complex o2){
            cout<<o1.a<<endl;
            cout<<o2.a<<endl;
            cout<<o1.b<<endl;
            cout<<o2.b<<endl;
        }

        void printNumber(){
            cout<<"Complex number --> "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();
  
    c3.setDatabySum(c1, c2);
    return 0;
}