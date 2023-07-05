#include<iostream>
using namespace std;

class Students{

    private:
        int roll, marks, fees;
        void Data();
        void setData();

    public:
        void getData(){
            Data();
            cout<<marks;
        }
};

void Students :: Data(){
    setData();
}

void Students :: setData(){
    cout<<"Enter the marks of the students --> ";
    cin>>marks;
}

int main(){
    Students arjun;
    // arjun.setData();
    arjun.getData();
    return 0;
}

// https://www.geeksforgeeks.org/void-pointer-c-cpp/