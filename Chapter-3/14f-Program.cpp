// Copy Constructors
#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        Distance() : feet(0), inches(0.0){}

        Distance(int ft, float in) : feet(ft), inches(in){}

        void GetDist(){
            cout << "Enter feet : ";
            cin >> feet;
            cout << "Enter inches : ";
            cin >> inches;
        }

        void ShowDist(){
            cout << feet << " and " << inches << " ";
        }
};

int main(){
    Distance dist1(11, 6.25);
    Distance dist2(dist1);   
    Distance dist3 = dist1;   
    
    cout << "Dist1 = ";
    dist1.ShowDist();
    cout<<endl;

    cout << "Dist2 = ";
    dist2.ShowDist();
    cout<<endl;

    cout << "Dist3 = ";
    dist3.ShowDist();
    cout<<endl;

    cout << endl;
    return 0;
}