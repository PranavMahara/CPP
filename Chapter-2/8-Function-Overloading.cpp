#include<iostream>
using namespace std;

int sum(int a, int b){  // Function Overloading --> 'sum' is used both here and see down (and also here)
    cout<<"This is using 2 variables! "<<endl;
    return a+b;
}

int sum(int a, int b, int c){  // and also here
    cout<<"This is using 3 variables! "<<endl;
    return a+b+c;
}

int main(){
    int a, b, c;
    cout<<"Enter a, b, c: ";
    cin>>a>>b>>c;

    cout<<sum(a, b)<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<sum(a, b, c)<<endl;

    return 0;
}