// Write a program in C++ that takes a number as input and prints its multiplication table upto 10.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value jiska aap table find karna chahte ho: ";
    cin>>n;

    for(int i=1; i<=10; i++){
        cout<<n<<"x"<<i<<" = "<<i*n<<endl;
    }    
    return 0;
}