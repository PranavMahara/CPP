// Write a C++ program to find the larger from two given integers. 
// However if the two integers have the same remainder when divided by 7, then the return the smaller integer. 
// If the two integers are the same, return 0

#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter 2 numbers --> ";
    cin>>x>>y;
    int flag;

    if(x==y){
        flag = 0;
    }

    else if(x%7==y%7){
        if(x>y){
            cout<<y<<endl;
        }

        else{
            cout<<x<<endl;
        }
    }

    else{
        if(x>y){
            cout<<x<<endl;
        }

        else{
            cout<<y<<endl;
        }
    }
    return 0;
}