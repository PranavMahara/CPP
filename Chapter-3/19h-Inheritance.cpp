#include <iostream>
using namespace std;
#include <process.h> //for exit()
#define MAX 3

class Stack{
    protected:          
        int st[MAX]; 
        int top;  

    public:
        Stack(){
            top = -1;
        }

        void push(int var){
            st[++top] = var;
        }

        int pop(){
            return st[top--];
        }
};

class Stack2 : public Stack{
    public:
        void push(int var){
            if (top >= MAX - 1){
                cout << "Error: stack is full"<<endl;
                exit(1);
            }

            Stack::push(var); 
        }

        int pop(){
            if (top < 0){
                cout << "Error: stack is empty"<<endl;
                exit(1);
            }
            return Stack::pop(); 
        }
};

int main(){
    Stack2 s1;
    s1.push(11); 
    s1.push(22);
    s1.push(33);
    cout << endl
         << s1.pop(); 
    cout << endl
         << s1.pop();
    cout << endl
         << s1.pop();
    cout << endl
         << s1.pop(); 
    cout << endl;
    return 0;
}

// How do push() and pop() in Stack2 access push() and pop() in Stack? They use the scope
// resolution operator, ::, in the statements
// Stack::push(var);
// and
// return Stack::pop();
// These statements specify that the push() and pop() functions in Stack are to be called. Without
// the scope resolution operator, the compiler would think the push() and pop() functions in
// Stack2 were calling themselves, which—in this case—would lead to program failure. Using the
// scope resolution operator allows you to specify exactly what class the function is a member of