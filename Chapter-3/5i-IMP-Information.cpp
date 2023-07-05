#include<iostream>
using namespace std;

class one{
    public:
        int a;
        
        void SetData(int x){
            a = x;
        }

};

void increase(one p, int d){
    p.a = p.a + d;
}

void RefIncrease(one &p, int d){
    p.a = p.a + d;
}

int main(){
    one x;
    x.SetData(5);
    increase(x, 2);
    cout<<x.a<<endl;

    cout<<"-------------------"<<endl;
    
    RefIncrease(x, 2);
    cout<<x.a<<endl;

    return 0;
}