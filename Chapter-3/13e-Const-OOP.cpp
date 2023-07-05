// We can apply const to objects
// of classes. When an object is declared as const, you can’t modify it. It follows that you can
// use only const member functions with it, because they’re the only ones that guarantee not to
// modify it.

#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public: 
        Distance(int ft, float in) : feet(ft), inches(in){}
        void GetDist(){
            cout << "Enter feet: "; 
            cin >> feet;
            cout << "Enter inches: "; 
            cin >> inches;
        }

        void showdist() const{ 
            cout << feet << " " << inches << " "; 
        }
};

int main(){
    const Distance football(300, 0);
    // football.GetDist(); //ERROR: getdist() not const
    cout << "Football = ";
    football.showdist();
    cout << endl;
    
    return 0;
}