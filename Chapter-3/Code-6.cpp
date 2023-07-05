#include<iostream>
#include<conio.h> 
using namespace std;

class student { 
    private: 
        int rollno; 
        char name [20]; 

    public:
        void getdata ( ); 
        void display ( );
};
class academic: public student {
    private:
        char stream;
    public:
        void getdata ( );
        void display ( ) ;
};

void student:: getdata ( ){
    cout<< "Enter Roll No"<<endl;
    cin>>rollno;
    cout<< "Enter Name "<<endl;
    cin>>name;
}

void student:: display(){
    cout<< "The student's roll number is "<<rollno<<" and name is "<<name<<endl;
    cout<< endl;
}

void academic :: getdata ( ){
    cout<< "Enter stream of a student? "<<endl; 
    cin >>stream;
}

void academic :: display (){
    cout<< "students stream "<<endl;
    cout <<stream<< endl;
}

int main(){
    student *ptr ; 
    academic obj ; 
    ptr = &obj; 
    ptr->getdata();
    ptr->display();

    return 0;
}