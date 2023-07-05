#include<iostream>
using namespace std;

class sample{
    int a, b;

    public:
        void SetData(){
            a = 11;
            b = 20;
        }

        friend float mean(sample s);
};

float mean(sample s){
    return (s.a+s.b)/2.0;
}

int main(){
    sample x;
    x.SetData();
    cout<<mean(x)<<endl;
    return 0;
}