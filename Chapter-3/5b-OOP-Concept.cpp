#include<iostream>
using namespace std;

class Concept{
    int a, b;
    public:
        void SetData(int x, int y){
            a = x;
            b = y;
        }

        void show(Concept c1, Concept c2){
            cout<<"The value of class c1 a is "<<c1.a<<endl;
            cout<<"The value of class c1 b is "<<c1.b<<endl; 

            cout<<"The value of class c2 a is "<<c2.a<<endl;
            cout<<"The value of class c2 b is "<<c2.b<<endl;
        }

};

int main(){
    Concept Data1, Data2;
    Data1.SetData(1, 3);

    int k, p;
    cout<<"Enter the value of k and p: ";
    cin>>k>>p;
    Data2.SetData(k, p);

    
    Data1.show(Data1, Data2);

 

    return 0;
}