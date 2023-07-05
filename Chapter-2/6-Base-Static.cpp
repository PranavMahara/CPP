#include<iostream>
using namespace std;

int product(int a, int b){
    static int c = 0; // ek bar hi chalega bas c = 0 then it is dead // This executes only once
    c = c+1;  // Next time this functions is run, then value of c will be retained
    return a+b+c;
}

int main(){
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    return 0;
}