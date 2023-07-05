#include<iostream>
using namespace std;

void test(int x){
    try{
        if (x==1){
            throw x;
        }
        else if (x==-1){
            throw 3.4;
        }
        else if (x==0){
            throw 's';
        }
        }

    catch(...){
        cout<<"Caught an Error";
    }
}

int main(){
    
    return 0;
}