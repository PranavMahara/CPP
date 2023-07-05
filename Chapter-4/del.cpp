#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    // ofstream op;
    // op.open("1-Sample.txt");

    string s;
    cout<<"Enter ";
    cin>>s;

    ofstream op;
    op.open("1-sample.txt");
    getline(cin, s);
    op.close();

    ifstream ok("1-sample.txt");
    string p;
    getline(ok,p);
    cout<<p;
    return 0;
}