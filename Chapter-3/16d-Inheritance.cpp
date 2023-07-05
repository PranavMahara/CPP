#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void val_a(int x){
            a = x;
        }

        int ret(){
            return a;
        }
};

class B : public A{

    public:
        int d;
        void val_d(int x){
            d = x;
        }

        void show(){
            cout<<"The value of a is "<<ret()<<" and d is "<<d<<endl;
        }
};

int main(){
    B k;
    k.val_a(5);
    k.val_d(6);
    k.show();

    return 0;
}