#include<iostream>
#include<string>
using namespace std;

class hel{
    string name2;

    public:
        void inp2(){
            cout<<"Enter your Full name again --> ";
            getline(cin, name2);
        }

        void Disp(){
            cout<<"Your name is "<<name2;
        }
};

int main(){
    hel ab;

    ab.inp2();
    ab.Disp();
    return 0;
}