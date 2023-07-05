// Write a program containing a constructor and a destructor for an array.The body shuld be :

// int main() {
//  IntegerArray a(2);//This call the constructor  // IntegerArray is name of the class
//  a.data[0] = 4; a.data[1] = 2;

//  cout << b.data[0] << endl; // The result is 4
// }

#include <iostream>
using namespace std;

class IntegerArray{
    public:
        int *data;
        int size;
        IntegerArray(){}
        IntegerArray(int size){
            data = new int[size];
            this->size = size;
        }

        IntegerArray(IntegerArray &o){
            data = new int[o.size];
            size = o.size;
            for (int i = 0; i < size; ++i){
                data[i] = o.data[i];
            }
        }

        ~IntegerArray(){
            delete[] data;
        }
};

int main(){
    IntegerArray a(2);
    a.data[0] = 4;
    a.data[1] = 2;

    IntegerArray b = a;

    cout << b.data[0] << endl;
}