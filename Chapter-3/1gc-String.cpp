#include<iostream>
using namespace std;

class Str{
    public:
        string name;
        void show(){
            cout<<"The name of the person is "<<name<<endl;
        }
};

int main(){ 
    Str abc, bcd;
    abc.name = "Arjun";
    bcd.name = "Arjun Malhotra";
    abc.show();
    bcd.show();
    return 0;
}