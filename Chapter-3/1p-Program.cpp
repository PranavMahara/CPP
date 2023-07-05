#include <iostream>
using namespace std;
#define SIZE 100

class stack{
    int stck[SIZE];
    int tos = 0;

    public:
        void push(int i){
            if (tos == SIZE){
                cout << "Stack is full.\n";
                return;
            }
            stck[tos] = i;
            tos++;
        }

        void pop(){
                if (tos == 0){
                    cout << "Stack underflow.\n";
                    return;
                }
                tos--;
        }

        void view(){
            for(int i=0; i<tos; i++){
                cout<<stck[i]<<" ";
            }
        }
};

int main(){
    stack stack1; // create two stack objects
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.pop();
    stack1.push(4);
    stack1.pop();
    stack1.push(5);
    stack1.view();

    // cout << stack1.pop() << " ";
    // cout << stack2.pop() << " ";
    // cout << stack2.pop() << "\n";
    return 0;
}