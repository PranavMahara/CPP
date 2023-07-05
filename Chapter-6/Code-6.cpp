#include <iostream>
using namespace std;
void divide(double x, double y){
    cout <<"Inside Function"<<endl;
    try{
        if (y == 0.0){
            throw y; // throwing double
        }
        else{
            cout <<"division = "<< x / y <<endl;
        }
    }
    catch (double){ // Catch a double
        cout <<"Caught double inside a function \n";
        throw; // rethrowing double
    }
    cout <<"end of function\n\n";
}
int main(){
    cout <<"inside main \n";
    try{
        divide(10.5, 2.0);
        divide(20.0, 0.0);
    }
    catch(double){
        cout <<"caught double inside main \n";
    }
    cout <<"End of main"<<endl;
    return 0;
}