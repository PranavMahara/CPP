#include<iostream>
using namespace std;

class Simple{
    int d1, d2;

    public:
        Simple(int a , int b = 9){
            d1 = a;
            d2 = b;
        }

        void printData(){
            cout<<"The value of data is "<<d1<<" and "<<d2<<endl;
        }
};

int main(){
    Simple s(1, 4); // 4 overwrites the value
    s.printData();
    
    Simple p(1);
    p.printData();

    return 0;
}