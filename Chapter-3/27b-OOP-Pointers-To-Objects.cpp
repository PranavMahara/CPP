#include<iostream>
using namespace std;

class Show{
    int a, b;

    public:
        void SetNum(int x, int y){
            a = x;
            b = y;
        }

        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    Show arjun[4];
    Show *ptr = arjun;   //  or //Show *ptr = &arjun[0];
    int a, b;
    for(int i=0; i<4; i++){
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
        ptr->SetNum(a, b);
        ptr++;
    }

    ptr = arjun; // Re-Initialize 

    for(int i=0; i<4; i++){
        ptr->display();
        ptr++;
    }
    return 0;
}