#include<iostream>
using namespace std;

class ab{
    static int n;
    int a = 0;

    public:
        void inc(){
            a++;
            n++;
        }
        void prin(){
            cout<<a<<" and "<<n;
        }
};

int ab :: n;

int main(){
    ab obj1, obj2, obj3;
    obj1.inc();
    obj2.inc();
    obj3.inc();

    obj3.prin();
    return 0;
}