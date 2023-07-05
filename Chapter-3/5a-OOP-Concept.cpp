#include<iostream>
using namespace std;

class Concept{
    int a, b;
    public:
        void SetData(int x, int y){
            a = x;
            b = y;
        }

        void show(Concept c1){
            cout<<"The value of a is "<<c1.a<<endl;
            cout<<"The value of b is "<<c1.b<<endl;
        }

};

int main(){
    Concept Data1, Data2;
    Data1.SetData(1, 3);
    Data1.show(Data1);

    int k, p;
    cout<<"Enter the value of k and p: ";
    cin>>k>>p;

    Data2.SetData(k, p);
    Data2.show(Data2);

    return 0;
}