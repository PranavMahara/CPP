#include<iostream>
using namespace std;

class A{
    protected:
        int x;

    public:
        void get(int a){
            x = a;
        }

        void show(){
            cout<<x<<endl;
        }
};

class A1 : virtual public A{
    protected:  
        int y;
    
    public: 
        void get(int a){
            y = a;
        }

        void show(){
            cout<<y<<endl;
        }
};

class A2 : virtual public A{
    protected:  
        int z;
    
    public: 
        void get(int a){
            z = a;
        }

        void show(){
            cout<<z<<endl;
        }
};

class A12 : public A1, public A2{
    int r;

    public:
        void get(int a){
            r = a;
        }

        void show(){
            int t = x+y+z+r;
            cout<<"Result is "<<t<<endl;
        }
};

int main(){
    A12 r;
    r.A :: get(3);
    r.A1 :: get(4);
    r.A2 :: get(5);

    r.get(6);
    r.show();
    return 0;
}