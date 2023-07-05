#include<iostream>
using namespace std;

class distae{
    private:
        int feet;
        float inches; 

    public:
        void setdist(int ft, float in){
            feet = ft;
            inches = in;
        } 

        void getdist(){
            cout<<"Enter feet:";
            cin>>feet;
            cout<<"Enter inches:";
            cin>>inches;
        }

        void showdist(){
            cout<< feet<<" "<<inches<<endl;
        }
};

int main(){
    distae d1, d2;
    d1.setdist(1 , 6.25);
    d2.getdist();
    cout<<"Dist2: ";
    d2.showdist();

    return 0;
}