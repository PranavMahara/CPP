#include<iostream>
using namespace std;

class Complex{
    int real, img;

    public:
        void setData(int a, int b){
            real = a;
            img = b;
        }
        
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<img<<endl;
        }
};

int main(){
    Complex c1;
    Complex *ptr = &c1; // Complex *ptr = new Complex; // Other way

    (*ptr).setData(1, 54); // ptr->setData(1, 54); // Other way
    (*ptr).getData(); // ptr->getData(); // Other way

    // Arrays of objects // See next cpp for better understanding
    Complex *pt = new Complex[4];  // If array banana hai
    pt->setData(1, 7);
    pt->getData();
    return 0;
}