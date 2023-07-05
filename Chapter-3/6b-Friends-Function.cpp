#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNum(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3; 
    o3.setNumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}

// Complex add(Complex c1, Complex c2){
//     Complex c3;
//     c3.a = c1.a + c2.a;
//     c3.b = c1.b + c2.b;
//     return c3;
// }

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNum();

    c2.setNumber(5, 8);
    c2.printNum();

    sum = sumComplex(c1, c2);
    sum.printNum();
    return 0;
}

// Properties -->
// 1. Not in the scope of class matlab friend is not a part of the class.
// 2. Since it is not in the scope of the class, it cannot be called from the object of that class like c1.sumComplex() is invalid
// 3. Can be written both in private or public part
// 4. Usually contains objects as arguements
// 5. Cannot access the members directly by their names and need object_name.member_name to access the members;