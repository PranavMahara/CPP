#include <iostream>
using namespace std;

class alpha{
    private:
        int data;

    public:
        alpha(){}

        alpha(int d){
            data = d;
        }

        void display(){
            cout << data;
        }

        // alpha operator = (alpha a){
        //     data = a.data;
        //     cout << "Assignment operator invoked"<<endl;
        //     return alpha(data);
        // }

        void operator = (alpha a){
            data = a.data;
            cout << "Assignment operator invoked"<<endl;
        }
};

int main(){
    alpha a1(37);
    alpha a2;

    a2 = a1;
    cout << "A2 = ";
    a2.display();
    cout<<endl;
    
    alpha a3 = a2;
    cout << "A3 = ";
    a3.display();
    cout << endl;
    return 0;
}