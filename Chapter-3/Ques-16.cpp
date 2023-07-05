// Write a program to create a class with Static Member function.

#include<iostream>
using namespace std;

class Static_Demo{
    public:
        static void check_prime(int a){
            int c = 0;
            for(int i=1; i<=a; i++){
                if(a%i==0){
                    c++;
                }
            }

            if(c<=2){
                cout<<a<<" is a prime number"<<endl;
            }

            else{
                cout<<a<<" is not a prime number"<<endl;
            }
        }
};



int main(){
    int n;
    cout<<"Enter n --> ";
    cin>>n;

    Static_Demo :: check_prime(n);
    
    return 0;
}