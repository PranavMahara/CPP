#include<iostream>
using namespace std;

class hell{
    int a;
    public:
        int b;
};

class inher : private hell{
    public:
        // void inp(){   // Wont work as 'a' is private
        //     cout<<"Enter the value of a: ";
        //     cin>>a;
        // }
        void inp(){
            cout<<"Enter the value of b: ";
            cin>>b;
        }
        void heko(){
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    inher arjun;
    arjun.inp();
    arjun.heko();
    // arjun.b = 69; // This is possible! only if mode is public now it is private abb ni hoga

    return 0;
}