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

    display(vec1);

    return 0;
}