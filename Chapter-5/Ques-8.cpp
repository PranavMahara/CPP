//  Program to find Largest among two numbers using class template

#include<iostream>
using namespace std;

template<typename T>
class maxx{
    T a, b;

    public:
        void max(T p, T q){
            if(p>q){
                cout<<"p is greater"<<endl;
            }

            else{
                cout<<"q is greater"<<endl;
            }
        }
};

int main(){
    maxx <int> obj;
    obj.max(4, 5);

    maxx <int> obj;
    obj.max(4, 5);

    maxx <int> obj;
    obj.max(4, 5);



    // maxx p; // Error!

    return 0;
}