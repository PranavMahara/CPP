#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> list1; // List of length 0
    // list<int> list2(7); // Empty list of size 7
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);

    list<int> :: iterator iter;
    iter = list1.begin();
    cout<<*iter<<" ";
    iter++;

    *iter = 69;
    
    cout<<*iter<<" ";
    iter++;

    cout<<*iter<<" ";
    iter++;
    
    cout<<*iter<<" ";

    return 0;
}