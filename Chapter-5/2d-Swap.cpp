#include<iostream>
#include<conio.h>
using namespace std;

template<class T>
class swapp{
    T a, b;

    public:
        swapp(T x, T y){
            a = x;
            b = y;
        }

        void swapab(){
            T temp;
            temp = a;
            a = b;
            b = temp;
        }

        void showdata(){
            cout<<a<<b;
        }
};

int main(){
    int m, n;
    float m1, n1;
    cout <<"Enter integer values";
    cin >> m >> n;

    cout <<"Enter floating values";
    cin >> m1 >> n1;

    swapp<int>c1(m, n);
    swapp<float>c2(m1, n1);
    c1.swapab();
    c1.showdata();

    c2.swapab();
    c2.showdata();
}
