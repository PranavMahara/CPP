#include<iostream>
using namespace std;

class code{
    int id;

    public:
        code(){} //constructor
        // code(int a){ id=a; } //constructor 
        code(int a){
            id = a;
        }

        code(code &x){
            id = x.id; 
        }

        void display(){
            cout<<id;
        }
};


int main(){
    code A(100);
    code B(A);
    code E(A);
    code C = A;
    code D; // Because of this we need default constructor i.e. code(){}
    D = A;
    cout<<"Id of A : "; 
    A.display();

    cout<<"Id of B : "; 
    B.display();

    cout<<"Id of C : "; 
    C.display();
    
    cout<<"Id of D : "; 
    D.display();
    return 0;
}