// Write a C++ program to show inheritance using different levels.

#include <iostream>
using namespace std;

class student{
    protected:
        int r_number;

    public:
        void get_number(int a){
            r_number = a;
        }

        void put_number(){
            cout << "roll No" << r_number << endl;
        }
};

class test : public student{
    protected:
        float sub1, sub2;

    public:
        void get_marks(float x, float y){
            sub1 = x;
            sub2 = y;
        }

        void put_marks(){
            cout << "Marks Obtained: " << endl;
            cout << "Sub1 = " << sub1 << endl;
            cout << "Sub2 = " << sub2 << endl;
        }
};

class sports{
    protected:
        float score;

    public:
        void get_score(float s){
            score = s;
        }

        void put_score(){
            cout << "Sports wt: " << score << endl;
        }
};

class result : public test, public sports{
    float total;

    public:
        void display();
};

void result :: display(){
    total = sub1 + sub2 + score;
    put_number();
    put_marks();
    put_score();
    cout << "Total Score: " << total << endl;
}

int main(){
    result student_1;
    student_1.get_number(123);
    student_1.get_marks(25.6, 22.0);
    student_1.get_score(6.0);
    student_1.display();
    return 0;
}
