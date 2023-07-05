#include<iostream>
using namespace std;

float money(int money, float factor = 1.04){
    return money*factor;
}

int main(){
    int mon = 100000;

    cout<<"Money after 1 year "<<money(mon)<<endl;
    cout<<"Money after 1 year for good people "<<money(mon, 1.10)<<endl;
    // default arguements like in this case 'factor' are those values which are default in case you dont assign any value to it
    // default here is 1.04 and if we assign them the value like we assigned 1.10 then float value will be 1.10
    return 0;
}