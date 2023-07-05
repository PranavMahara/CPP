#include<iostream>
using namespace std;

// In C++, the constructor cannot be virtual, because when a constructor of a class is executed there is no virtual table in the memory, 
// means no virtual pointer defined yet. 
// So, the constructor should always be non-virtual. But virtual destructor is possible.
class A{
    protected:
        int a = 8;
    
    public:
        virtual void show() = 0;
        virtual ~A(){
            cout<<"Destructor executed from class A"<<endl;
        }
};

class B : public A{
    public: 
        void show(){
            cout<<a<<endl;
        }

        ~B(){
            cout<<"Destructor executed from class B"<<endl;
        }
};

class C : public A{
    public: 
        void show(){
            cout<<a<<endl;
        }

        ~C(){
            cout<<"Destructor executed from class C"<<endl;
        }
};

int main(){
    A *base_ptr;
    B der_b;
    // C der_c;    // yeh karoge toh answer alag aaega
    // B der_b;
    // The one which is declared afterwards gets destroyed first

    base_ptr = &der_b;
    base_ptr->show();
    cout<<"----------------------"<<endl;

    return 0;
}