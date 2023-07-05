// Write a simple program using class in C++ to input subject mark and prints it. 

#include<iostream>
using namespace std;

class Marks{
    private :
        int m1, m2;

    public:
        void GetData(){
            cout<<"Enter 1st subject mark: ";
            cin>>m1;
            cout<<"Enter 2nd subject mark: ";
            cin>>m2;
        }

        void DisplayData(){
            cout<<"1st subject mark: "<<m1<<endl; 
            cout<<"2nd subject mark: "<<m2;
        }
};

int main(){
    Marks x;
    x.GetData();
    x.DisplayData();
    return 0;
}