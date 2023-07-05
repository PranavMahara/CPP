#include<iostream>
using namespace std;

int main(){
    float *ptr = new float(34.67);
    cout<<*ptr<<endl;

    char *pt = new char('a');
    cout<<*pt;
    return 0;
}