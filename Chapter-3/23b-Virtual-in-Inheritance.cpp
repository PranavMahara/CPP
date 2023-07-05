#include <iostream>
#include <conio.h>
using namespace std;

class student{
    protected:
        int r_no;

    public:
        void get_n(int a){
            r_no = a;
        }
        void put_n(){
            cout << "Roll No. " << r_no<<endl;
        }
};
class test : virtual public student{
    protected:
        int part1;
        int part2;

    public:
        void get_m(int x, int y){
            part1 = x;
            part2 = y;
        }
        void put_m(){
            cout << "Marks Obtained : " <<endl;
            cout << "Part1 = " << part1 <<endl;
            cout << "Part2 = "<< part2 <<endl;
        }
};

class sports : public virtual student{                                     
    protected:
        int score;

    public:
        void get_s(int a){
            score = a;
        }
        void put_s(){
            cout << "Sports wt. : " << score <<endl;
        }
};

class result : public test, public sports{
    private:
        int total;

    public:
        void show(){
            total = part1 + part2 + score;
            put_n();
            put_m();
            put_s();
            cout << "Total Score = " << total <<endl;
        }
};

int main(){

    result S1;
    S1.get_n(345);
    S1.get_m(30, 35);
    // S1.get = S(7);
    S1.show();
}