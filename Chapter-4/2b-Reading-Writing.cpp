#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream hout("2b-Sample.txt");
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    hout<<name<<" is my name ";
    hout.close();

    ifstream hin("2b-Sample.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    hin.close();
    return 0;
}