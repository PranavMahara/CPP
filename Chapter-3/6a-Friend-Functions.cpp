#include<iostream>
using namespace std;

class Input{
    int a, b;

    public:
        // Input(int x, int y) : a(x), b(y){}
        Input(int x, int y){
            a = x;
            b = y;
        }
        
        friend int Add(Input);
};

int Add(Input x){
    return x.a + x.b;
}

int main(){
    Input num(1, 2);

    cout<<"The sum is "<<Add(num);

    return 0;
}