#include <iostream>
using namespace std;
int main(){
    long dividend, divisor;
    char ch;
    do {
        cout << "Enter dividend: "; cin >> dividend;
        cout << "Enter divisor: "; cin >> divisor;
        if( divisor == 0 ){ 
            cout << "Illegal divisor"<<endl; 
            continue; 
        }
        cout << "Quotient is " << dividend / divisor;
        cout << ", remainder is " << dividend % divisor;
        cout << "\nDo another? (y/n): ";
        cin >> ch;
    } while( ch != 'n' );

    return 0;
}