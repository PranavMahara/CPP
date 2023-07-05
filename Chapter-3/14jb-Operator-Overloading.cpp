#include<iostream>
using namespace std;

class op{
    int a;
    public:
        op(int x){
            a=x;
        }
        void operator --(){
            --a;
        }

        void operator --(int){
            a--;
        }

        void displat(){
            cout<<a<<endl;
        }
};

int main(){
    op x(5);

    x--;
    --x;

    x.displat();


    return 0;
}