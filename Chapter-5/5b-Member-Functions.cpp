#include<iostream>
using namespace std;

template <class T>
class Arjun{
    public:
        T data;
        Arjun(T a){
            data = a;
        }

        void display();
};

template <class T>
void Arjun<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"FIRST func()"<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"TEMPLATISED func()"<<a<<endl;
}

int main(){
    // Arjun<float> h(5.7);
    // cout<<h.data<<endl;
    // h.display();

    func(4); // Exact Match takes the highest priority
    func1(4);
    return 0;
}