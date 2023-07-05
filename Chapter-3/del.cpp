#include<iostream>
using namespace std;

class A{
    public:
        void display(int a, int b){
            cout<<a<<b<<endl;
        }

        void display(){
            cout<<"khaali"<<endl;
        }

        void display(int a){
            cout<<a<<endl;
        }
};

int main(){
    A obj;
    obj.display(5);
    obj.display(5, 7);
    obj.display();
    return 0;
}