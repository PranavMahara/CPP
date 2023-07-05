#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter 2 numbers --> ";
    cin >> a ;
    cin >> b ;

    try{
        if (b != 0){
            cout << "Quotient is : " << a / b << endl;
        }
        else{
            throw a;
        }
    }

    catch (int ex){
        cout << "Error, division not possible...";
    }
}