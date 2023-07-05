// Pointers to Objects : Pointers to objects are useful for creating objects at run time. To access members arrow operator (*) and de referencing operator or indirection (*) are used.

#include<iostream>
using namespace std;

class item{
    int code;
    float price;

    public:
        void getdata(int a,float b){
            code=a;
            price=b;
        }

        void show(){
            cout<<"Code: "<<code<<" "<<"Price: "<<price<<endl;
        }
};

int main(){
    item obj;
    item *ptr = &obj;

    // The member can be accessed as follow.

    // a) Accessing members using dot operator
    obj.getdata(101,77.7); 
    obj.show();

    // b)using pointer
    ptr->getdata(101,77.7);
    ptr->show();

    // c)Using de referencing operator and dot operator
    (*ptr).getdata(101,77.7);
    (*ptr).show();
    return 0;
}