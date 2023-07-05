#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<10; i++){
        cout<<"Hello"<<endl;
        if(i==5){
            break;
        }
        cout<<"BYE"<<endl;
    }

    cout<<"-----------------------\n"<<endl;

    for(int i=0; i<5; i++){
        if(i==2){
            continue;
        }
        cout<<"Hello"<<i<<endl;
    }
    return 0;
}