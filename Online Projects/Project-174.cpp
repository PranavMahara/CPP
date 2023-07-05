// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).

#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);

    for(int i=0; i<s.size(); i++){
        if(s[i]=='z'){
            cout<<'a';
        }
        else{
            cout<<(char)(s[i]+1);
        }
    }


    return 0;
}