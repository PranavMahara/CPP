#include <iostream>
using namespace std;


int main(){
    char str[100]; 
    cout << "Enter a string: ";
    cin.get(str, 100, '$'); //terminate with $    // Used to have input (multi-line)
    cout << "You entered:\n" << str << endl;
    
    string ptr; 
    cout << "Enter a string: ";
    // cin.get(ptr, 100, '$'); //error
    cout << "You entered:\n" << ptr<< endl;
    
    return 0;
}