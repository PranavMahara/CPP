// Hybrid/Multipath Inheritance: Hybrid inheritance is combination of two or more inheritances such as single, multiple, multilevel or Hierarchical inheritances.

#include<iostream>
using namespace std;

class arithmetic{
    protected:
        int num1, num2;

    public:
        void getdata(){
            cout<<"For Addition: "<<endl;
            cout<<"Enter the first number: ";
            cin>>num1;

            cout<<"Enter the second number: ";
            cin>>num2;
        }
};

class plus : virtual public arithmetic{
    protected:
        int sum;

    public:
        void add(){
            sum = num1 + num2;
        }
};

class minus : virtual public arithmetic{
    protected:
        int n1, n2, diff;

    public:
        void sub(){
            cout<<"For Subtraction:"<<endl;
            cout<<"Enter the first number: ";
            cin>>n1;
            cout<<"Enter the second number: ";
            cin>>n2;
            diff = n1 - n2;
        }
};

class result : public plus, public minus{
    public:
        void display(){
            cout<<"Sum of "<<num1<<" and "<<num2<<"= "<<sum<<endl; 
            cout<<"Difference of "<<n1<<" and "<<n2<<"= "<<diff<<endl;
        }
};

int main(){
    result z;
    z.getdata();
    z.add();
    z.sub();
    z.display();

    return 0;
}
