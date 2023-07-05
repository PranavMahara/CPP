#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int last = s[s.length()-1] - '0';
    cout<<last<<endl;
    return 0;
}