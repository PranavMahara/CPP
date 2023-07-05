#include<iostream>
using namespace std;
// Yes, the destructor is nothing more than a function. 
// You can call it at any time. However, calling it without a matching constructor is a bad idea.

class Marks{
    public:
    int maths;
    int science;
    // Constructor
    Marks(){
        cout << "Inside Constructor"<<endl;
        cout << "C++ Object created"<<endl;
    }

    //Destructor
    ~Marks() {
    cout << "Inside Destructor"<<endl;
    cout << "C++ Object destructed"<<endl;
    }
};

int main(){
    Marks m1;
    Marks m2;
    return 0;
}