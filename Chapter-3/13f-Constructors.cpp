#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"No objects in the parameters!"<<endl;
        }

        A(int a){
            cout<<"Single objects in the parameters!"<<endl;
        }

        A(int a, int b){
            cout<<"Double objects in the parameters!"<<endl;
        }

        A(float a, int b){  // float pe error aajega
            cout<<"Float found"<<endl;
        }
};

int main(){
    A no, single(10), doube(10, 20), ff((float)1.2, 3.3);
    return 0;
}