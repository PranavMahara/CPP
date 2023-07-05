#include<iostream>
using namespace std;

class Fun{ 
    float x, y; 

    public: 
        Fun(float a,float b){ 
            x = a; 
            y = b; 
        } 

        Fun(Fun &f){
            cout<<"Copy constructor at work"<<endl; 
            x = f.x; 
            y = f.y; 
            cout<<"Copy constructor work finish"<<endl; 
        }    
        
        void display(){ 
            cout<<x<<" "<<y<<endl; 
        } 
}; 

int main(){
    Fun p(2.6, 6.8);
    Fun z(p);
    z.display();
    return 0;
}


