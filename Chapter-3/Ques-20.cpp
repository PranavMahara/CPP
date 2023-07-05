// Write a program for Unary operator Overloading

#include<iostream>
using namespace std;

class Cel{
    int temp;

    public:
        Cel(int i=0){
            temp = i;
        }

        Cel operator -- (){
            Cel temper;
            temper.temp = --temp;
            return temper;            
        }

        void display(){
            cout<<"Temperature --> "<<temp<<endl;
        }
};

int main(){
    Cel one(3);
    cout<<"Before Decrement --> ";
    one.display();

    Cel two = --one;
    cout<<"After Decrement --> ";
    two.display();

    return 0;
}