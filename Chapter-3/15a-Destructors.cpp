#include<iostream>
using namespace std;
// Destructors are usually used to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed. 
// A destructor is called for a class object when that object passes out of scope or is explicitly deleted.
// Destructor never takes an arguement nor does it return any value
class num{
    int count = 0;
    public:
        num(){
            count++;
            cout<<"This is time when constructor is called for object number --> "<<count<<endl;
        }

        ~num(){
            cout<<"This is time when destructor is called out for object number --> "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are in main function"<<endl;
    // cout<<"Creating first object n1"<<endl;
    // num n1;
    // Block
    // jese hi block end hoga jo bhi chize banengi they will be destroyed 
    cout<<"-------------"<<endl;
    {
        // cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects in block"<<endl;
        num n2;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}

// (i) These are called automatically when the objects are destroyed. 
// (ii) Destructor functions follow the usual access rules as other member functions. 
// (iii) These de-initialize each object before the object goes out of scope. 
// (iv) No argument and return type (even void) permitted with destructors. 
// (v) These cannot be inherited. 
// (vi) Static destructors are not allowed. 
// (vii) Address of a destructor cannot be taken. 
// (viii) A destructor can call member functions of its class. 
// (ix) An object of a class having a destructor cannot be a member of a union. 