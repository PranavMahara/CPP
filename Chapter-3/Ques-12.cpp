#include<iostream>
using namespace std;

class timee{
    int hours; 
    int minutes;
    
    public:
        void gettime(int h, int m){
            hours=h; 
            minutes=m;
        }

        void puttime(){
            cout<< hours<<"hours:";
            cout<<minutes<<"minutes: "<<endl;
        }

        void sum(timee t1, timee t2){
            minutes = t1.minutes + t2.minutes;
            hours = minutes%60; 
            minutes = minutes%60; 
            hours = hours + t1.hours + t2.hours;
        }
};

int main(){
    timee T1, T2, T3;
    T1.gettime(2,45);
    T2.gettime(3,30);
    T3.sum(T1,T2);
    cout<<"T1= ";
    T1.puttime( );
    cout<<"T2= ";
    T2.puttime( );
    cout<<"T3= ";
    T3.puttime( );
    return 0;
}