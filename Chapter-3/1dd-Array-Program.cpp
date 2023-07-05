// Using constructors doing 1d-OOP.cpp

#include<iostream>
using namespace std;

class Marks{
    int mark[5];

    public:
        Marks(){
            for(int i=0; i<5; i++){
                cout<<"Enter the marks for subject "<<i+1<<" --> ";
                cin>>mark[i];
            }

            cout<<endl;
            
            cout<<"DISPLAYING MARKS"<<endl;
            for(int i=0; i<5; i++){
                cout<<"Marks for subject "<<i+1<<" --> "<<mark[i]<<endl;
            }
        }
};

int main(){
    Marks atg;
    // atg.mark[3] = 5; /*Works if mark[5] is declared public*/
    return 0;
}