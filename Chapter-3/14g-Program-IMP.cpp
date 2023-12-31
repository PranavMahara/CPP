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
            cout << feet << " " << inches << " ";
        }

        Distance add_dist(Distance); // add
};

Distance Distance :: add_dist(Distance d2){
    Distance temp;                    
    temp.inches = inches + d2.inches; 
    if (temp.inches >= 12.0){                                 
        temp.inches -= 12.0;          
        temp.feet = 1;                
    }                                 
    temp.feet += feet + d2.feet;      
    return temp;
}

int main(){
    Distance dist1, dist3;
    Distance dist2(11, 6.25);      
    dist1.GetDist();               
    dist3 = dist1.add_dist(dist2); 

    cout << "Dist1 = ";
    dist1.ShowDist();
    cout<<endl;

    cout << "Dist2 = ";
    dist2.ShowDist();
    cout<<endl;

    cout << "Dist3 = ";
    dist3.ShowDist();
    cout<<endl;

    return 0;
}