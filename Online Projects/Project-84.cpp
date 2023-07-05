// Write a C++ program to check whether given length of three side form a right triangle.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter the value of a, b, c: ";
    cin>>a>>b>>c;

    if((a*a + b*b)==c*c || (b*b + c*c)==a*a || (a*a + c*c)==b*b){
        cout<<"The sides "<<a<<", "<<b<<", "<<c<<" form Right Triangle"<<endl;
    }
    else{
        cout<<"The sides "<<a<<", "<<b<<", "<<c<<" do not form Right Triangle"<<endl;
    }
    return 0;
}