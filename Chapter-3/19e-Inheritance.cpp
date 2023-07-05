#include <iostream>
using namespace std;

class Student{
    protected:
        string rollno;

    public:
        void RegNo(string r){
            rollno = r;
        }
        void ShowReg(){
            cout << rollno << endl;
        }
};

class test : public Student{
    protected:
        float s1, s2;

    public:
        void GetMarks(float x, float y){
            s1 = x;
            s2 = y;
        }

        void ShowMarks(){
            cout << s1 << endl;
            cout << s2 << endl;
        }
};

class sports{
    protected:
        float Score;

    public:
        void SetScore(float s){
            Score = s;
        }
        void ShowScore(){
            cout << Score << endl;
        }
};

class result : public test, public sports{
    private:
        float total;

    public:
        void GenerateResult(){
            total = s1 + s2 + Score;
            ShowReg();
            ShowMarks();
            ShowScore();
            cout << total << endl;
        }
};

int main(){
    result s1;
    s1.RegNo("21BBS0110");
    s1.GetMarks(90, 91);
    s1.SetScore(7);
    s1.GenerateResult();
}