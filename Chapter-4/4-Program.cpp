#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("3-sampleww.txt");
    for(int i=0; i<4; i++){
        out<<"This is she\n";
    }
    out.close();

    

    return 0;
}