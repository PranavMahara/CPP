#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        void getdist(){
            cout << "Enter feet: "; 
            cin >> feet;
            cout << "Enter inches: "; 
            cin >> inches;
        }

        void showdist(){ 
            cout << feet << " " << inches << " "; 
        }
};

int main(){
    Distance& dist = *(new Distance); 

    dist.getdist(); 
    dist.showdist(); 

    return 0;
}