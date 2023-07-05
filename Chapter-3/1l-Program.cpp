#include <iostream>
using namespace std;

class part {
    private:
        int x;
        int y; 
        float z; 

    public:
        void setpart(int x, int y, float z) {
            this->x = x;
            this->y = y;
            this->z = z;
        }
        void showpart() {
            cout << "Model " << x;
            cout << ", part " << y;
            cout << ", costs $" << z << endl;
        }
};

int main(){
    part part1; 

    part1.setpart(6244, 373, 217.55F); 
    part1.showpart(); 
    
    return 0;
}