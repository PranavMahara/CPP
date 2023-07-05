#include<iostream>
using namespace std;

class sample{
    public:
        int x;

        void display(){
            cout<<"The value of x is --> "<<x<<endl;
        }

};

int main(){
    sample s;
    sample *ptr;

    int sample::*f = &sample::x;

    s.x = 10;
    ptr=&s;

    cout<<ptr->*f<<endl;
    ptr->display();
    return 0;
}