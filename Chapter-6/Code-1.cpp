#include<iostream>
using namespace std;
#define max 5

class array{
    private:
        int a[max];

    public:
        int &operator[](int i){
        if (i<0 || i>=max){
            throw i;
        }
        else{
            return a[i];
        }
    }
};

int main(){

    array x;
    try{
        cout<<"Trying to refer a[1]";
        x[1]=3;
        cout<<endl;

        cout<<"Trying to refer a[13]";
        x[13]=5;
        cout<<endl;

    }

    catch(int i){
        cout<<endl;
        cout<<"Out of range in array References";
    }
}
