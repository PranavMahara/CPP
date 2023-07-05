// Write a C++ program to convert a given number into hours and minutes. Separate the number of hours and minutes with a colon

#include<iostream>
using namespace std;

int main(){
    int minutes;
    cout<<"Enter in minutes: ";
    cin>>minutes;
    int hours = minutes/60;

    cout<<hours<<" Hours "<< minutes -60*hours<<" Minutes";
    return 0;
}