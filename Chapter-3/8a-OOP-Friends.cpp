#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setvalue(int value){
            data = value;
        }
            
        friend void add(X, Y);
};

class Y{
    int num;
    public:
        void setvalue (int value){
            num = value;
        }

        friend void add(X, Y);
        friend void show(Y pro);

        void show(){
            cout<<num<<endl;
        }
};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects give "<<o1.data + o2.num<<endl;
}

void show(Y pro){
    pro.setvalue(pro.num);
    pro.show();
}

int main(){
    X a;
    a.setvalue(3);

    Y b;
    b.setvalue(5);

    add(a, b);
    show(b);
    return 0;
}