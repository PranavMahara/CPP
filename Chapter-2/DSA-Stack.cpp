/*
Arrays as Class Member Data

A stack works like the spring-loaded devices that hold trays in cafeterias. When you put a tray
on top, the stack sinks down a little; when you take a tray off, it pops up. The last tray placed
on the stack is always the first tray removed.
Stacks are one of the cornerstones of the architecture of the microprocessors used in most
modern computers.

stacks can also be created completely
in software. Software stacks offer a useful storage device in certain programming situations,
such as in parsing (analyzing) algebraic expressions.
*/

#include <iostream>
using namespace std;

class Stack{
    private:
        enum{
            MAX = 10
        };           
        int st[MAX]; 
        int top;     
    public:
        Stack(){
            top = 0;
        }
        void push(int var){
            st[++top] = var;
        }
        int pop(){
            return st[top--];
        }
};

int main(){
    Stack s1;
    s1.push(11);
    s1.push(22);
    cout << "1: " << s1.pop() << endl; // 22
    cout << "2: " << s1.pop() << endl; // 11
    s1.push(33);
    s1.push(44);
    s1.push(55);
    s1.push(66);
    cout << "3: " << s1.pop() << endl; // 66
    cout << "4: " << s1.pop() << endl; // 55
    cout << "5: " << s1.pop() << endl; // 44
    cout << "6: " << s1.pop() << endl; // 33
    return 0;
}
/*
The important member of the stack is the array st. An int variable, top, indicates the index of
the last item placed on the stack; the location of this item is the top of the stack.
The size of the array used for the stack is specified by MAX, in the statement
enum { MAX = 10 };

This definition of MAX is unusual. In keeping with the philosophy of encapsulation, it’s preferable
to define constants that will be used entirely within a class, as MAX is here, within the class.
Thus the use of global const variables for this purpose is nonoptimal. Standard C++ mandates
that we should be able to declare MAX within the class as
static const int MAX = 10;
This means that MAX is constant and applies to all objects in the class. Unfortunately, some
compilers, including the current version of Microsoft Visual C++, do not allow this newlyapproved construction.
As a workaround we can define such constants to be enumerators (described in Chapter 4). 
We don’t need to name the enumeration, and we need only the one enumerator:
enum { MAX = 10 };
This defines MAX as an integer with the value 10, and the definition is contained entirely within
the class. This approach works, but it’s awkward. If your compiler supports the static const
approach, you should use it instead to define constants within the class.
Figure 7.6 shows a stack. Since memory grows downward in the figure, the top of the stack is
at the bottom in the figure. When an item is added to the stack, the index in top is incremented
to point to the new top of the stack. When an item is removed, the index in top is decremented.
(We don’t need to erase the old value left in memory when an item is removed; it just becomes
irrelevant.)
To place an item on the stack—a process called pushing the item—you call the push() member function with the value to be stored as an argument. To retrieve (or pop) an item from the
stack, you use the pop() member function, which returns the value of the item.
The main() program in STAKARAY exercises the stack class by creating an object, s1, of the
class. It pushes two items onto the stack, and pops them off and displays them. Then it pushes
four more items onto the stack, and pops them off and displays them.
As you can see, items are popped off the stack in reverse order; the last thing pushed is the first
thing popped.
Notice the subtle use of prefix and postfix notation in the increment and decrement operators.
The statement
st[++top] = var;
in the push() member function first increments top so that it points to the next available array
element—one past the last element. It then assigns var to this element, which becomes the new
top of the stack. The statement
return st[top--];
first returns the value it finds at the top of the stack, then decrements top so that it points to the
preceding element.
*/