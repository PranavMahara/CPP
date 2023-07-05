#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> stk;
    if(stk.empty()){
        cout << "Stack is empty" << endl;
    } 
    
    else {
        cout << "Stack is not empty" << endl;
    }
    
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    cout << "Size of the stack: " << stk.size() << endl;
    
    while(!stk.empty()){
        int item = stk.top(); 
        stk.pop();
        cout << item << " ";
    }

    return 0;
}