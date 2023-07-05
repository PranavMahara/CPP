#include<iostream>
using namespace std;

class hospital{

    private:
        int age;

    public:
        int bed;
        void Enage(){
            cout<<"Enter the age: ";
            cin>>age;
        }
        void check(){
            if(age==23){
                cout<<"No bed registered!";
            }
            else{
                cout<<"Room 009";
            }
        }
};

// void hospital :: check(){
//     if(age == 60){
//         cout<<"bye"<<endl;
//     }
// }

int main(){
    hospital atg;
    // cout<<"Enter the bed number --> ";   // It will work as it is declared in the public section of the class
    // cin>>atg.bed;

    atg.Enage();
    atg.check();

    return 0;
}