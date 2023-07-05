#include<iostream>
#include<conio.h>
using namespace std;

class sum{ 
    private: 
        int a, b, c;
        float d;
        double e; 
    
    public:
        sum(){
            cout<<"Enter a: ";
            cin>>a;
            cout<<"Enter b: "; 
            cin>>b; 
            cout<<"Sum = "<<a+b<<endl;
        }
        sum(int a, int b);
        sum(int a, float d, double c);
};

sum :: sum(int x, int y){
    a = x;
    b = y;
}

sum :: sum(int p, float q, double r){
    a = p; 
    d = q; 
    e = r;
} 

int main(){
    sum l;
    sum m = sum(20, 50);
    sum n = sum(3, 3.2, 4.55);
    
    return 0;
}