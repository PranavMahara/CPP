#include<iostream>
using namespace std;

class Stack{
    int element[4], item, top = 0;

    public:
        void operator+(){
            if(top==4){
                cout<<"Stack Overflow"<<endl;
                return;
            }

            cout<<"Enter item --> ";
            cin>>item;
            element[top] = item;
            top++;
        }

        void operator-(){
            if(top == 0){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            cout<<"Item Pop --> "<<element[top];
            top--;
        }

        void display(){
            if(top==0){
                cout<<"Stack Empty"<<endl;
                return;
            }

            cout<<"Elements in the stack are --> ";
            for(int i=0; i<top; i++){
                cout<<element[i]<<" ";
            }
        }
};

int main(){
    int option;
    Stack obj;

    cout<<"1. Push in Stack"<<endl;
    cout<<"2. Pop in Stack"<<endl;
    cout<<"3. Display in Stack"<<endl;
    cout<<"4. Exit in Stack"<<endl;

    do{
        cout<<"Enter choice --> ";
        cin>>option;

        switch(option){
            case 1:
            +obj;
            break;

            case 2:
            -obj;
            break;

            case 3:
            obj.display();
            break;

            default:
            cout<<"Invalid"<<endl;
            break;
        }
    }while(option!=4);
    return 0;
}