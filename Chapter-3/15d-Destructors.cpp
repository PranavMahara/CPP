#include<iostream>
using namespace std;

int x = 1; 

class abc{ 
    public:
        abc(){
            x--;
            cout<<"Construct the number "<<x<<endl;
        }

        ~abc(){
            cout<<"Destruct the number: "<<x<<endl;
            x--;
        }
};

int main(){
    abc one, two, three;
    
    return 0;
}
