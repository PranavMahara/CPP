#include <iostream>
#include <conio.h> 
using namespace std;

int main(){
    char dir = 'a';
    int x = 10, y = 10;

    while( dir != '\r' ){
        cout<<endl;
        cout << "Your location is " << x << ", " << y<<endl;
        cout << "Enter direction (n, s, e, w): ";
        dir = getche();
            switch(dir){ 
                case 'n': y--; break; 
                case 's': y++; break; 
                case 'e': x++; break; 
                case 'w': x--; break; 
                case '\r': cout << "Exiting"<<endl;
                break; 
                default: cout << "Try again"<<endl; 
            } 
    } 

    return 0;
}