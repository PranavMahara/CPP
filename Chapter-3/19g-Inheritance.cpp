#include <iostream>
using namespace std;

class Counter{
    protected:
        int count;

    public:
        Counter() : count(){}

        Counter(int c) : count(c){}

        int get_count() const{
            return count;
        }
        Counter operator++(){
            return Counter(++count);
        }
};

class CountDn : public Counter{
    public:
        CountDn() : Counter(){}

        CountDn(int c) : Counter(c){}

        CountDn operator--(){
            return CountDn(--count);
        }
};

int main(){

    CountDn c1;
    CountDn c2(100);
    cout << "C1 = " << c1.get_count()<<endl;
    cout << "C2 = " << c2.get_count()<<endl;
    ++c1;
    ++c1;
    ++c1;
    cout << "C1 = " << c1.get_count()<<endl;
    --c2;
    --c2;
    cout << "C2 = " << c2.get_count()<<endl;
    CountDn c3 = --c2;
    cout << "C3 = " << c3.get_count()<<endl;
    cout << endl;
    return 0;
}