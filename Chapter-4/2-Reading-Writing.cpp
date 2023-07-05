#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream atg("2-Sample.txt");
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    atg<<"My name is "<< name;
    atg.close();
    return 0;
}