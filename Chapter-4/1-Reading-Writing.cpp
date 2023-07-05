#include<iostream>
#include<string>
#include<fstream>
using namespace std;
// The useful classes for working with files in C++ are:
//     1. fstreambase
//     2. ifstream --> derived from fsrteambase
//     3. ofstream --> derived from fsrteambase

// There are 2 ways to open the file
// 1. Using constructor
// 2. Using member function open() of the class

int main(){
    string s = "ARJUN";
    string st;
    // Opening files with constructors and writing to it
    // ofstream out("1-Sample.txt");
    // out<<s;

    // Opening files using constructor and Reading to it
    ifstream in("1b-Sample.txt");
    // in>>st; // ise use karnse se sirf ek word hi aaega to get line see below

    getline(in, st);
    cout<<st<<endl;
    getline(in, st);
    cout<<st;
    return 0;
}