// Write a program to demonstrate Copy Constructor

#include<iostream>
using namespace std;

class A{
    public:
        int x;
        char name[20];

        A(const char name1[], int a){
            x = a;
            for(int j=0; j<20; j++){
                name[j] = name1[j];
            }
        }

        A(A &i){
            x = i.x;
            for(int j=0; j<20; j++){
                name[j] = i.name[j];
            }
        }
};

int main(){
    A one("Arjun", 100);
    A two(one);

    cout<<"This is first object Data "<<endl;
    puts(one.name);
    cout<<one.x<<endl;
    
    cout<<"This is second object Data "<<endl;
    puts(two.name);
    cout<<two.x<<endl;

    return 0;
}