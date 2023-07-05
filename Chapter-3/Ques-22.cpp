// Write a program to create a class which has Array as a data member.

#include<iostream>
using namespace std;

class student{
    int roll;
    int marks[5];

    public:
        void GetData(){
            cout<<"Enter roll number --> ";
            cin>>roll;

            for(int i=0; i<5; i++){
                cout<<"Enter marks in subject "<<(i+1)<<" --> ";
                cin>>marks[i];
            }
        }

        void total_marks(){
            int total = 0;
            for(int i=0; i<5; i++){
                total += marks[i];
            }
            cout<<"Total marks --> "<<total<<endl;
        }
};

int main(){
    student stu;
    stu.GetData();
    stu.total_marks();
    return 0;
}