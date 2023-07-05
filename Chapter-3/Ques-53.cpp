// Write C++ program to overload the unary operator

#include <iostream>
using namespace std;

class sample{
    int x, y;

    public:
        sample() {}

        sample(int i, int j){
            x = i;
            y = j;
        }

        void show(){
            cout << "x= " << x << endl;
            cout << "y= " << y << endl;
        }

        sample operator++();
};

sample sample::operator++(){
    x++;
    y++;
    return *this;
}

int main(){
    sample ob1(3, 4), ob2(5, 6);
    ob1.show();
    ob2.show();
    ++ob1;
    ob1.show();
    ob2 = ++ob1;
    ob1.show();
    ob2.show();
    
    return 0;
}
