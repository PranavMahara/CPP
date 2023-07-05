// Write a program and input two integers in main and pass them to default constructor of the class. Show the result of the additon of two numbers.

#include<iostream>
using namespace std;

class show{
    int a, b;
    public:
        show(int x, int y){
            a = x;
            b = y;
        }

        int sum(){
            return a+b;
        }
};

int main(){
    int a, b;
    cout<<"Enter a and b --> ";
    cin>>a>>b;

    show ab(a, b);
    cout<<"The sum of the numbers --> "<<ab.sum()<<endl;

    return 0;
}