#include<iostream>
using namespace std;

class hel{
    string name;

    public:
        void Inp(){
            cout<<"Enter your Full name --> ";
            cin>>name;
        }

        void Disp(){
            cout<<"Your name is "<<name;
        }

};

int main(){
    hel ab;
    ab.Inp();
    ab.Disp();
    return 0;
}

// what will happen if i declare same name for data and function in class
// You cant because if you have example(), 'example' is a pointer to that function.