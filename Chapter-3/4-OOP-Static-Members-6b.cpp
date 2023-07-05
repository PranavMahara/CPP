// static data used here***
#include<iostream>
using namespace std;

class CusCount{
    int CountOfObject;
    static int CountOfCustomer;

    public:
        void GetObjectNumber(int a){
            CountOfObject = a;
            CountOfCustomer++;
        }

        void display(){
            cout<<"Count of Object --> "<<CountOfObject<<endl;
            cout<<"Count of Customer --> "<<CountOfCustomer<<endl;
        }
};

int CusCount :: CountOfCustomer;

int main(){
    CusCount c1, c2, c3;
    c1.GetObjectNumber(1);
    c1.display();
    c2.GetObjectNumber(2);
    c3.GetObjectNumber(3);

    c2.display();
    c3.display();
    return 0;
}