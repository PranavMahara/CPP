#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float x;
    cout<<"Enter the decimal --> ";
    cin>>x;

    int result = round(x);
    cout<<result<<endl;
    return 0;
}