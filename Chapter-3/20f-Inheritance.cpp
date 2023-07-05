// Hybrid Inheritance
// There could be situations where we need to apply two or more types of inheritance to design a 
// program. Basically Hybrid Inheritance is the combination of one or more types of the inheritance. 
// Here is one implementation of hybrid inheritance.


// This is not example of hybrid!
#include<iostream>
using namespace std;

class student{
    protected:
        int r_no; 

    public:
        void get_n(int a){
            r_no = a; 
        } 

        void put_n (){
            cout << "Roll No. : "<< r_no;
            cout << "In";
        }
};
class test : public student{ 
    protected : 
        int part1, part2;

    public :
        void get_m(int x, int y) { 
            part1 = x; part2 = y; 
        } 

        void put_m (){
            cout << "Marks obtained: " << "In"<< "Part 1 = " << part1 << "In" << "Part 2 = " << part2 <<endl;
        }
};

class sports{ 
    protected: 
        int score; 

    public:
        void get_s (int s){
            score = s ;
        } 

        void put_s (){
            cout << "Sports wt.: "<< score <<endl;
        }
};

class result : public test, public sports{
    int total;
    public:
    void display();
};

void result :: display(){
    total = part1 + part2 + score;
    put_n();
    put_m();
    put_s();
    cout << "Total score: " <<total<<endl;
}


int main(){
    result S1; 
    S1.get_n(347); 
    S1.get_m(30, 35); 
    S1.get_s(7); 
    S1.display();

    return 0;
}