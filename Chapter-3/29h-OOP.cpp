#include <iostream>
using namespace std;

class where{
    private:
        char charray[10]; // occupies 10 bytes
    public:
        void reveal(){
            cout << "My object's address is " << this<<endl;
        }
};

int main(){
    where w1, w2, w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();
    cout << endl;
    return 0;
}