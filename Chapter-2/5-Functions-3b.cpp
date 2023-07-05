#include<iostream>
using namespace std;

int &show(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    return *a;
}

int main(){
    int a = 4;
    int b = 7;
    cout<<"VALUE --> "<<show(&a, &b);
    return 0;
}