#include<iostream>
using namespace std;
int top = -1;
int Max = 4;

class Stack{
    int elements[10];
    int item;

public:
    void operator+();
    void operator-();
    void display();
};
void Stack::operator+()
{

    try
    {
        if (top == Max - 1)
        {
            throw "Stack is overflow";
        }
        else
        {
            cout << "\n Enter Item ::\t";
            cin >> item;
            top++;
            elements[top] = item;
        }
    }
    catch (char *err)
    {
        cout << err;
    }
}

void Stack::operator-()
{
    try
    {
        if (top == -1)
        {
            throw "Stack is underflow";
        }
        else
        {
            item = elements[top];

            cout << "\nPopped Item ::\t" << item;

            top--;
        }
    }
    catch (char *err)
    {
        cout << err;
    }
}

void Stack::display()
{
    try
    {
        if (top == -1)
        {
            throw "\n Stack is underflow\n";
        }
        else
        {
            cout << "\n Elements in the stack are:\n";
            for (int i = top; i >= 0; i--)
            {
                cout << elements[i] << "\t";
            }
        }
    }
    catch (char *err)
    {
        cout << err;
    }
}
int main()
{
    int ch;
    Stack stackObj;
    char choice = 'y';
    cout << "\nEnter 1 for Push\t";
    cout << "\nEnter 2 for Pop\t";
    cout << "\nEnter 3 for Dislay\t";

    do
    {
        cout << "\nEnter you choice\t";
        cin >> ch;
        switch (ch)
        {
        case 1:
            stackObj.operator+();
            break;
        case 2:
            stackObj.operator-();
            break;
        case 3:
            stackObj.display();
            break;
        default:
            cout << "Wrong Choice";
            break;
        }
        cout << "\nDo you want to continue press 'y' for yes and 'n' for No\t";
        cin >> choice;
    } while (choice == 'y');

    return 0;
}