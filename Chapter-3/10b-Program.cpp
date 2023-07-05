#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            cout<<"EHH"<<endl;
            cout<<"jkk562"<<endl;
            x = a;
            y = b;
        }

        void display(){
            cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
        }
};

int main(){
    Point o(9, 7), k(1, 3);
    o.display();
    k.display();
    return 0;
}