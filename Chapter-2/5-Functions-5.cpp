#include<iostream> // Reference Variables
using namespace std;
int &swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    int x, y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;

    cout<<"The value of x and y before swapping is "<<x<<" and "<<y<<endl;
    swap(x, y) = 766;
    cout<<"The value of x and y after swapping is "<<x<<" and "<<y<<endl;

    return 0;
}