#include<iostream>
using namespace std;

class vector{

    public:
        int a, b;
        vector(){}

        vector(int x, int y) : a(x), b(y){}
        // vector(int x, int y){
        //     a = x;
        //     b = y;
        // }

        void add(vector x, vector y){
            a = x.a + y.a;
            b = x.b + y.b;
        }

        void display(){
            cout<<a<<" + "<<b<<"i"<<endl; 
        }
};

int main(){

    vector first(2, 3), second(3, 4), third;
    third.a = 69;
    third.b = 68;
    // What will be the output 69 + 68i or 5 + 7i
    third.add(first, second);
    third.display();

    return 0;
}