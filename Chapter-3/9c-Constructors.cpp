#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class abc{ 
    private:
        string str; 
        int age;

    public:
        abc(){}
        abc(string x, int y);

        void get(){
            cout<<"Enter your name: ";
            getline(cin, str);
            cout<<"Enter your age: ";
            cin>>age;
        }

        void display(){
            cout<<str<<endl;
            cout<<age<<endl;
        }
};

abc :: abc(string x, int y){
    str = x; 
    age = y;
} 

int main(){
    abc one;
    abc two = abc("Computer", 20000);
    one.get();
    one.display();
    two.display();

    return 0;
}