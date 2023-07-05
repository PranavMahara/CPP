#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"DISPLAY"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";   // or v.at(i) instead of v[i]
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    vector<char> vec2(4); // 4-element vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> v(6, 3); // 6-element vector of 3s
    display(vec1);
    display(vec2);
    display(vec3);
    display(v);
    
    cout<<v.size();
    return 0;
}