#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 4, b = 78, c = 1233;
    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The value of a is: "<<b<<endl;
    // cout<<"The value of a is: "<<c<<endl;
    

    cout<<"The value of a is: "<<a<<setw(4)<<a<<endl;
    cout<<"The value of a is: "<<setw(4)<<b<<endl;
    cout<<"The value of a is: "<<setw(4)<<c<<endl; // setw makes total length 4 
    
    return 0;
}

// t manipulators are operators used with the insertion operator (<<) to modify—or manipulate—the way data is displayed.
// Manipulators are the operators used to format the data that is to be displayed on screen.The most commonly
// used manipulators are endl and setw

// #include<iomanip> THIS IS USED