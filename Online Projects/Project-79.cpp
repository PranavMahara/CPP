// Write a C++ program to which replace all the words "dog" with "cat"

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string --> ";
    getline(cin, s);

    for(int i=0; i<s.size()-3; i++){
        if(s[i]=='d' && s[i+1]=='o' && s[i+2]=='g'){
            cout<<"Tes"<<endl;
            s[i] = 'c';
            s[i+1] = 'a';
            s[i+2] = 't';
        }
    }

    cout<<"The updated string is --> "<<s<<endl;
    return 0;
}