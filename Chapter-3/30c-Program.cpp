#include<iostream>
using namespace std;
 
class Product{ 
    public:
        int Prod(int x, int y) {
            return x*y;
        }
 
    int Prod(int x, int y, int z) {
        return x*y*z;
    }
};
 
int main(){
    Product obj;
    cout << "Product is "<<obj.Prod(10, 20)<<endl;
    cout << "Product is "<<obj.Prod(10, 20, 30)<<endl;
 
    return 0;
}