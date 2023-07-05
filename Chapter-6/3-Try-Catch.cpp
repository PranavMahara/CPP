#include <iostream>
using namespace std;

int main(){
    try{
        int age;
        cout<<"Age --> ";
        cin>>age;

        if (age >= 18){
            cout << "You can appear for driving test!";
        }

        else{
            throw 404;
        }
    }
    catch (int err_no){
        cout << "You cannot appear for driving test"<<endl;
        cout << "Error number: " << err_no;
    }
    return 0;
}

// Within parentheses, catch blocks can have one parameter