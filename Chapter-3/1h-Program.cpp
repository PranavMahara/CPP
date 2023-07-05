#include<iostream>
using namespace std;

class show{
    int options;

    public:
        show(){
            cout<<"Enter anything from 1 to 3"<<endl;
        }

        void op(int a){
            options = a;

            if(options==1){
                cout<<"Good Morning, Arjun";
            }

            else if(options==2){
                cout<<"Good Afternoon, Arjun";
            }

            else{
                cout<<"Good Night, Arjun";
            }
        }


};

int main(){
    show a;
    int p;
    cout<<"Enter --> ";
    cin>>p;

    a.op(p);
    return 0;
}