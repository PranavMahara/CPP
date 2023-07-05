#include<iostream>
using namespace std;

class demo{
    int x, y;
    public:
        void SetData(int a, int b){
            x = a;
            y = b;
        }

        void display(){
            cout<<x<<" "<<y<<endl;
        }

        void increment(){
            x = x + 1;
            y = y + 1;
        }

        void operator ++(){
            x = x + 1;
            y = y + 1;
        }

        void operator +(){
            x = x + 69;
            y = y + 69;
        }
};

int main(){
    demo d1, d2;
    d1.SetData(10, 20);
    ++d1;
    // d1.increment();
    d1.display();

    d2.SetData(30, 40);
    +d1;
    d1.display();

    return 0;
}