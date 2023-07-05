#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";   // or v.at(i) instead of v[i]
    }
}

int main(){
    vector<int> vec1;

    int element;
    for(int i=0; i<5; i++){
        cout<<"Enter element "<<i+1<<" --> ";
        cin>>element;
        vec1.push_back(element);
    }

    // display(vec1);

    // Now if i want to point iterator to some middle value
    // or any other specific value then we can do the following thing

    int index;
    cout<<"Enter karo kaha pe daalna chahte ho --> ";
    cin>>index;
    vector<int> :: iterator iter = vec1.begin() + index;

    cout<<"Enter the element you gonna enter --> ";
    cin>>element;
    vec1.insert(iter, element);

    display(vec1);

    // (vi. begin() + vi. size()) / 2
    // This is for entering element in middle!

    return 0;
}