// 3 types of LOOPS --> 1) For 2) Do while 3) While Loop

#include<iostream>
using namespace std;

int main(){
    // while loop

    int i = 1;
    while(i<=5){
        cout<<i<<endl;
        i++;
    }

    cout<<"---------------"<<endl;
    // do-while loop

    int k = 2;
    do{
        cout<<k<<endl;
        k++;
    }while(k<=5);

    cout<<"---------------"<<endl;
    // FOR loop
    for(int p = 8; p<10; p++){
        cout<<p<<endl;
    }


    return 0;
}