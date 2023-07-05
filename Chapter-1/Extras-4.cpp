#include <iostream>
#include <process.h> //for exit()
#include <conio.h> //for getche()
using namespace std;

int main(){
    char dir='a';
    int x=10, y=10;
    while( dir != '\r' ){
        cout << "\nYour location is " << x << ", " << y;
        cout << "\nEnter direction (n, s, e, w): ";
        dir = getche(); //get direction

        switch(dir){
            case 'n': y--; break; //update coordinates
            case 's': y++; break;
            case 'e': x++; break;
            case 'w': x--; break;
        }

        if( x==7 && y==11 ){
            cout << "\nYou found the treasure!\n";
            exit(0); //exit from program
        }
    } //end switch
    return 0;
}