//  Write a program to pass a pointer to a structure as a parameter to 
// a function and return back a pointer to structure to the calling 
// function after modifying the members of structure.

#include<iostream>
using namespace std;

struct student{
    char name[20];
    int marks;
};

struct student * print(struct student *ptr){
    cout<<"Enter name --> ";
    cin>>ptr->name;

    cout<<"Enter marks --> ";
    cin>>&ptr->marks;

    return ptr;
}

int main(){
    struct student s1, *s2;
    cout<<"Enter name --> ";
    cin>>s1.name;
    
    cout<<"Enter marks --> ";
    cin>>s1.marks;

    s2 = print(&s1);
    cout<<"Content after modifying --> "<<endl;
    cout<<s2->name<<" "<<s2->marks;


    return 0;
}