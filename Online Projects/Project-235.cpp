// Implement a function which receives a pointer to a student struct 
// and sets the value of its fields.

#include<iostream>
using namespace std;

struct student{
    char name[20];
    int marks;
};

void print(struct student *ptr){
    cout<<"Enter name --> "<<ptr->name<<endl;
    cout<<"Enter marks --> "<<ptr->marks<<endl;
}

int main(){
    struct student s1;
    cout<<&s1;
    cout<<s1.name<<" "<<s1.marks<<endl;

    return 0;
}