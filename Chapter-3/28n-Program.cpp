#include <iostream>
using namespace std;

int main(){
    void centimize(double*); 
    double var = 10.0; 
    cout << "Var = " << var << " Inches" << endl;
    centimize(&var); 
    cout << "Var = " << var << " Centimeters" << endl;

    return 0;
}

void centimize(double* ptrd){
    *ptrd *= 2.54; 
}