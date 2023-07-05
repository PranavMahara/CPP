#include<iostream>
using namespace std;
#define SIZE 5

class Stack{
    int s[SIZE];
    int top;

    public:
        Stack() : top(0){}

        void push(int d){
            if(top==SIZE){
                cout<<"Stack is FULL"<<endl;
                return;
            }

            s[top] = d;
            top++;
        }

        int pop(){
            if(top==0){
                cout<<"Stack --> EMPTY"<<endl;
                return 0;
            }

            // cout<<s[top];
            top--;
            return s[top];
        }
};

int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    return 0;
}