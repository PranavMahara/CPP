#include<iostream> // Call by Pointer
using namespace std;
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x, y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;

    cout<<"The value of x and y before swapping is "<<x<<" and "<<y<<endl;
    swap(&x, &y);
    cout<<"The value of x and y after swapping is "<<x<<" and "<<y<<endl;

    return 0;
}