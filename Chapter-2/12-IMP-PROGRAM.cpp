#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string --> ";
    cin>>s;
    int length = s.size();

    for(int i=0; i+3<=length; i++){
        string sub = s.substr(i, 3);
        cout<<sub<<endl;
    }
    return 0;
}