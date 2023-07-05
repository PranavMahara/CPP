#include<iostream>
using namespace std;

class Student{
    protected:
        int roll;
    
    public:
        void set_roll_number(int r){
            roll = r;
        }
        void get_roll_number(){
            cout<<"The roll number is "<<roll<<endl;
        }
};

class Exam : public Student{
    protected:
        float maths;
        float physics;

    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        
        void get_marks(){
            cout<<"The marks obtained in maths are: "<<maths<<endl;
            cout<<"The marks obtained in physics are: "<<physics<<endl;
        }
};

class Result : public Exam{

    float percentage;
    public:
        void display_results(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<endl;
        }

};

int main(){
    // Student art;
    // art.roll = 4;  // roll is inacessible since it is protected and protected can only be inherited
    Result arjun;
    arjun.set_roll_number(420);
    arjun.set_marks(99.8, 34);
    arjun.display_results();

    // If we are inheriting B from A and C from B: [A-->B-->C]
    // 1. A is base class for B amd B is base class for C
    // 2. ABC is called inheritance Path
    return 0;
}