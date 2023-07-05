#include<iostream>
using namespace std;

int main(){
    int marks[] = {1, 2, 3, 4};

    int *ptr = &marks[0]; // or int *ptr = marks;
    
    cout<<"The value of marks[0] is "<<ptr[0]<<endl;
    cout<<"The value of marks[1] is "<<ptr[1]<<endl;
    cout<<"The value of marks[2] is "<<ptr[2]<<endl;
    cout<<"The value of marks[3] is "<<ptr[3]<<endl;

    return 0;
}