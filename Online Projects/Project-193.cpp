// Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged. Go to the editor
// Sample Input:
// "if else"
// "else"
// Sample Output:
// if else
// if else

#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string --> ";
    getline(cin, s);

    if(s=="else"){
        s = "if " + s;
    }

    cout<<s<<endl;

    return 0;
}