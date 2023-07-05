#include<iostream>
using namespace std;

int main(){
    string s = "Arjun";
    string p = "bro";
    // s.insert(3, "Malhotra");
    // s.insert(12, p, 0, 12);    // inserts the first 12 characters from the string s2 at position 13 in string s1.
    // s.erase(2, 3);
    s.replace(2, 4, p);
    
    cout<<s<<endl;
    return 0;
}