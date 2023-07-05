// Let us say the 'child' has two direct base classes ‘parent1’ and ‘parent2’ which themselves has a 
// common base class ‘grandparent’. The child inherits the traits of ‘grandparent’ via two separate 
// paths. It can also be inherit directly as shown by the broken line. The grandparent is sometimes 
// referred to as ‘INDIRECT BASE CLASS’. Now, the inheritance by the child might cause some 
// problems. All the public and protected members of ‘grandparent’ are inherited into ‘child’ twice, first 
// via ‘parent1’ and again via ‘parent2’. So, there occurs a duplicacy which should be avoided.
#include<iostream>
using namespace std;

// Student --> Test
// Student --> Sports
// Test --> Result
// Sports --> Results

// students ke variable voh test mein and sports mein aaenge
// test and sports ke elements result mein aaenge toh result ko two times mil jaegne students
// ke elements
// so jab test and sports bana rahe hai toh student hamari virtual base class hai
// it will take care ki sirf ek copy voh inherit kare
class Student{
    protected:
        int roll;

    public:
        void Set_Roll(int a){
            roll = a;
        }

        void print_Num(){
            cout<<"Roll Number is "<<roll<<endl;
        }
};

class Test : virtual public Student{ // virtual public or public virtual both works
    protected:
        float maths, phy;
        
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            phy = m2;
        }

        void print(){
            cout<<"Marks in maths --> "<<maths<<" and in physics --> "<<phy<<endl;
        }
};


class Sports : virtual public Student{
    protected:
        float score;
    
    public:
        void Set_Score(float a){
            score = a;
        }

        void Sccore(){
            cout<<"PT Score --> "<<score<<endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;

    public:
        void display(){
            total = maths + phy + score;
            print_Num();
            print();
            Sccore();
            cout<<"TOTAL SCORE IS --> "<<total<<endl;
        }
};

int main(){
    Result arjun;
    arjun.Set_Roll(4);
    arjun.set_marks(78, 79);
    arjun.Set_Score(99);

    arjun.display();
    return 0;
}