// Write a program for Template Function

#include<iostream>
using namespace std;

template <class X>
X func(X a, X b){
    cout<<"Given number is "<<a<<" and "<<b<<endl;
    if(a>b){
        cout<<"The greater number is "<<a<<endl;
    }

    else{
        cout<<"The great number is "<<b<<endl;
    }
}

template <class Obj>
class A{
    private:
        Obj a, b;
    
    public:
        A(Obj x, Obj y){
            a = x;
            b = y;
        }

        void show(){
            cout<<add()<<endl;
        }

        Obj add(){
            Obj c = a+b;
            return c;
        }
};

int main(){
    cout<<"Using Function Template"<<endl;
    func(9, 5);
    func(3.7, 5.6);

    A<int>add_int(4, 5);
    A<float>add_float(4.6, 8.9);
    A<double>add_double(3.145, 5.654);

    add_int.show();
    cout<<endl;

    add_float.show();
    cout<<endl;

    add_double.show();
    return 0;
}