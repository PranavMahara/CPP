#include <iostream>
using namespace std;

int main(){
    void centimize(double&); 
    double var = 10.0; 
    cout << "var = " << var << " inches" << endl;
    centimize(var); 
    cout << "var = " << var << " centimeters" << endl;
    
    return 0;
}

void centimize(double& v){
    v *= 2.54;  // v = v*2.54
}