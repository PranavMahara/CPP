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
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }

        void ShowDist(){
            cout << feet << " " << inches << " ";
        }

        void AddDist(Distance, Distance); 
};

void Distance :: AddDist(Distance d2, Distance d3){
    inches = d2.inches + d3.inches; 
    feet = 0;                       
    if (inches >= 12.0){                              
        inches -= 12.0;             
        feet++;                     
    }                               
    feet += d2.feet + d3.feet;      
}

int main(){
    Distance dist1, dist3;
    Distance dist2(11, 6.25);   

    dist1.GetDist();              
    dist3.AddDist(dist1, dist2); 
    
    cout << "Dist1 = ";
    dist1.ShowDist();
    cout<<endl;

    cout << "Dist2 = ";
    dist2.ShowDist();
    cout<<endl;

    cout << "Dist3 = ";
    dist3.ShowDist();
    cout << endl;
    
    return 0;
}