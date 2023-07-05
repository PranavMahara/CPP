#include<iostream>
using namespace std;

class Add{
    int a, b;

    public:
        void SetNum(int x, int y){
            a = x;
            b = y;
        }

        void display(){
            cout<<"The value of a+b is "<<a+b<<endl;
        }
};

int main(){
    Add num[5];
    Add *ptr = num;
    int a, b;

    for(int i=0; i<4; i++){
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
        ptr[i].SetNum(a, b);
    }

    for(int i=0; i<4; i++){
        ptr[i].display();
    }
    return 0;
}