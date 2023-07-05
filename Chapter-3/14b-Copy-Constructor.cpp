#include<iostream>
using namespace std;

class sample{
    int n; 

    public:
        sample(){
            n = 0;
        }

        sample(int a){
            n = a;
        }

        sample(sample &x){
            n = x.n;
        }

        void display(){
            cout<<n<<endl;
        }
};

int main(){
    sample A(100);
    sample B(A); // Implicit Call
    sample C = A; // Explicit Call
    sample D;
    D = A;  // Explicit Call only
    A.display();
    B.display();
    C.display();
    D.display();
}
