// Multiple Constructors in a Class: Multiple constructors can be declared in a class. There can be any
// number of constructors in a class.
#include<iostream>
using namespace std;

class complex{
    float real, img;
    public:
        complex(){ 
            real = img = 0;
        }

        complex(float r){ 
            real = img = r;
        }

        complex(float r,float i){ 
            real = r;
            img = i;
        }

        complex(complex &c){ 
            real = c.real;
            img = c.img;
        }

        complex sum(complex c){
            complex t;
            t.real = real + c.real;
            t.img = img + c.img;
            return t;
        }

        void show(){
            if(img>0){
                cout<<real<<"+i"<<img<<endl;
            }
            else{
                img =- img;
                cout<<real<<"-i"<<img<<endl;
            }
        }
};

int main(){
    complex c1(1,2);
    complex c2(2,2);
    complex c3;
    c3 = c1.sum(c2);
    c3.show();
}