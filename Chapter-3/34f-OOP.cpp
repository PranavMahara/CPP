#include<iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 3

using namespace std;

void push(int i);
void pop(void);

int choice, i;
int *tos, *p1, arr_stack[MAX_SIZE];
int exit_p = 1;

int main() {

    int value;

    tos = arr_stack; 
    p1 = arr_stack; 

    do{
        cout << "Stack Pointer : Main Menu"<<endl;

        cout << "1.Push \t2.Pop \tOthers to exit : \nYour Choice : ";
        cin>>choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin>>value;
                push(value);
                break;
            case 2:
                pop();
                break;
            default:
                exit_p = 0;
                break;
        }
    } while (exit_p);

    return 0;
}

void push(int i) {
    if (p1 == (tos + MAX_SIZE)) {
        cout << "\nStatus : Stack Overflow.\n";
    } else {
        *p1 = i;
        cout << "\nPush Value : %d " << *(p1);
        p1++;
    }
}

void pop(void) {
    if (p1 == tos) {
        cout << "\nStatus : Stack Underflow.";
        //return 0;
    } 
    
    else {
        p1--;
        cout << "\nPop Value : %d " << *(p1);
    }
}