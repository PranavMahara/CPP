// Create 3 classes,
// Class Vehicle:
//      Vehicle class will contain a display() function which will say "This is a Vehicle"

// Class Car:
//      Vehicle class will contain a display() function which will say "This is a Car"

// Class Bike:
//      Vehicle class will contain a display() function which will say "This is a Bike"

// Now You will be given an integer N which will denote the number of tyres in the vehicles.
// If N = 2 Create Bike Object
// If N = 4, Create a Car Object
#include<iostream>
using namespace std;

class Vehicle{
    public:
        virtual void display(){
            cout<<"This is a vehicle"<<endl;
        }
};

class Car : public Vehicle{
    public:
        void display(){
            cout<<"This is a Car"<<endl;
        }
};

class Bike : public Vehicle{
    public:
        void display(){
            cout<<"This is a Bike"<<endl;
        }
};

int main(){
    int n;
    cout<<"Enter number of tyres --> ";
    cin>>n;

    if(n==2){
        Bike b;
        Vehicle *ptr = &b;
        ptr->display();
        
    }

    else if(n==4){
        Car c;
        Vehicle *ptr;
        ptr=&c;
        ptr->display();
    }


    return 0;
}