#include<iostream>
#include<map>
#include<string>

using namespace std;
// Map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["Arjun"] = 98;
    marksMap["BROOT"] = 58;
    marksMap["kops"] = 56;

    marksMap.insert({{"NUJRA", 169}, {"Chobi", 696}});
    map<string, int> :: iterator iter;

    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    
    return 0;
}