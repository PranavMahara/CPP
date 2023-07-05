#include<iostream>
using namespace std;

class A{
    int a;
    public:
        // A& setData(int a){
        void setData(int a){
            this->a = a;  // this is a keyowrd which is a pointer which points to the object which invokes the member function
            // return *this
        }
        // this pointer uss object par point karega jisne member function ko call kiya agar aap us object ko return karna chahte ho toh aap return this likho toh voh return ho jaega voh object jisne member function ko call kiya.
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
