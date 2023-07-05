#include<iostream>
using namespace std;

class calculator{
    int a, b;

    public:
        void set(int x, int y){
            a = x;
            b = y;
        }

        calculator(){
            cout<<"1. Addition "<<endl;
            cout<<"2. Subtraction "<<endl;
            cout<<"3. Multiplication "<<endl;
            cout<<"4. Division "<<endl;
        }

        void calc(int k){
            if(k==1){
                cout<<"Addition is "<<a+b<<endl;
            }

            else if(k==2){
                cout<<"Subtraction is "<<a-b<<endl;
            }

            else if(k==3){
                cout<<"Multiplication is "<<a*b<<endl;
            }

            else if(k==4){
                cout<<"Division is "<<a/b<<endl;
            }
        }

};

int main(){
    calculator arjun;
    int a, b, k;
    cout<<"Enter the options: ";
    cin>>k;
    
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    arjun.set(a, b);
    arjun.calc(k);

    return 0;
}