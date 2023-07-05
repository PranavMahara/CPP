// Write a program in C++ to find the last prime number occur before the entered number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(n; n>=0; n--){
        int num = 0;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                num++;
            }
        }
        if(num==2){
            cout<<"The prime number is "<<n<<endl;
            break;
        }
    }
    return 0;
}