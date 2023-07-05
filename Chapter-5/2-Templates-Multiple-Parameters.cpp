#include<iostream>
using namespace std;

template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<data1<<endl<<data2<<endl;
        }
};

int main(){
    myClass<char, float>obj('C', 1.8);
    obj.display();
    // myClass<int, float>obj(2, 1.8);  // We can even have int float char together
    // obj.display();
    // myClass<char, int>obj('C', 1);
    // obj.display();
    return 0;
}