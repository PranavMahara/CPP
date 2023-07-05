// The getche() library function

// returns a character when any key is pressed
// displays a character on the screen when any key is pressed.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char pl = 'a'; // You need to initialse pl otherwise getche() wont run
    cout<<"Enter a character without pressing the enter key --> ";
    pl = getche();
    cout<<endl;
    if(pl=='p'){
        cout<<"Pen";
    }

    else{
        cout<<"Ball";
    }
    return 0;
}