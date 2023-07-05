// Write a program in C++ to find the Deficient numbers (integers) between 1 to 100.

#include<iostream>
using namespace std;

int main(){
    int i;
    cout<<"Enter kaha tak chahiye: ";
    cin>>i;

    for(int n = 1; n<=i; n++){
        int sum = 0;

        for(int i=1; i<=n; i++){
            if(n%i==0){
                sum = sum + i;
            }
        }
        if(sum<2*n){
            cout<<n<<" ";
        }
    }
    return 0;
}