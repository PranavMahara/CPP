#include<iostream>
using namespace std;

class Counter{
    int val;

    public:
        Counter(int x) : val(x){}

        void operator - (){
            val = -val;
        }

        void display(){
            cout<<"The value of val is "<<val<<endl;
        }
};

int main(){
    Counter obj1(5);
    -obj1;
    obj1.display();
    -obj1;
    obj1.display();
    return 0;
}