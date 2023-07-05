#include<iostream>
using namespace std;

class nam{
    string n;
    int options;

    public:
        void init(){
            cout<<"Enter your name --> ";
            cin>>n;

            cout<<"Enter the option number --> ";
            cin>>options;
        }

        void show(){
            if(options==1){
                cout<<"Good Morning, "<<n;
            }

            else if(options==2){
                cout<<"Good Afternoon, "<<n;
            }

            else{
                cout<<"Good Night, "<<n;
            }
        }

};

int main(){
    nam a;
    a.init();
    a.show();
    
    return 0;
}