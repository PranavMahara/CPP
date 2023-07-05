// Write a program for Hybrid Inheritance

#include<iostream>
using namespace std;

class arithmetic{
    protected:
        int num1, num2;
    
    public:
        void GetData(){
            cout<<"Enter First Number --> ";
            cin>>num1;
            
            cout<<"Enter Second Number --> ";
            cin>>num2;
        }
};

class plus : public arithmetic{
    protected:
        int sum;
    
    public:
        void add(){
            sum = num1+num2;
        }
};

class Minus : public arithmetic{
    protected:
        int n1, n2, diff;
    
    public:
        void sub(){
            cout<<"Enter First Number --> ";
            cin>>n1;
            
            cout<<"Enter Second Number --> ";
            cin>>n2;

            diff = n1-n2;
        }
};

class result : public plus, public Minus{
    public:
        void display(){
            cout<<"Sum --> "<<sum<<endl;
            cout<<"Diff --> "<<diff<<endl;
        }
};

int main(){
    result z;
    z.GetData();
    z.add();
    z.sub();
    z.display();

    return 0;
}