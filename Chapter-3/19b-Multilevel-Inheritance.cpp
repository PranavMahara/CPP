#include<iostream>
using namespace std;

class one{
    private:
        int p;
    protected:
        int a;
    
    public:
        void value_a(int k){
            a = k;
        }
        
        void value_p(int k){
            p = k;
        }

        int value_p(){
            return p;
        }
};

class two : public one{
    
    protected:
        int b;
    
    public:
        void value_b(int k){
            b = k;
        }

        // int value_b(){
        //     return b;
        // }
};

class three : public two{
    public:
        void show(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of p is "<<value_p()<<endl;
        }
};

int main(){
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    three atg;

    atg.value_a(a);
    atg.value_b(b);

    int p;
    cout<<"Enter the value of p: ";
    cin>>p;

    atg.value_p(p);
    atg.show();
    return 0;
}