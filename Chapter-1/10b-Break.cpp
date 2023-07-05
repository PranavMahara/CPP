#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<3; i++){
        int n;
        cout<<"Enter n  --> ";
        cin>>n;

        while(n!=4){
            cout<<n<<endl;
            if(n==6){
                break;
            }
            cout<<"Enter n again --> ";
            cin>>n;
        }

        cout<<"N ACHIEVED"<<endl;
    }
    
    cout<<"N ACHH"<<endl;
    return 0;
}