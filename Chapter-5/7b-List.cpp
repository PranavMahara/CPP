#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it!=lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1; // List of length 0
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);

    display(list1);
    
    list<int> list2(7);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;

    *iter = 6;
    iter++;

    *iter = 9;
    iter++;

    // list2.pop_back();  // Deletes the last element
    // list2.pop_front(); // Deletes the elemenet from the front
    // list2.remove(9); // Removes all the occurence of 9 in the list
    display(list2);

    list1.merge(list2); // Merges the list
    display(list1);


    return 0;
}