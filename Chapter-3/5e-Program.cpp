#include<iostream>
using namespace std;

class show{
    int a, b;

    public:
        void set(int x, int y){
            a = x;
            b = y;
        }

        void showw(show c1){
            cout<<c1.a*c1.b<<endl;
        }

};

int main(){
    show b;
    b.set(2, 3);
    b.showw(b);
    return 0;
}