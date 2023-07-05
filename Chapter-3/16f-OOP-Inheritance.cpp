#include<iostream>
using namespace std;

class shape{
    protected:
        int width;
        int height;
    public:
        void GetData(int w, int h){
            width = w;
            height = h;
        }
};

class rectangle : public shape{
    public:
        int area(){
            return width*height;
        }
};

int main(){
    rectangle r;
    r.GetData(5, 7);
    cout<<"Area of rectange --> "<<r.area()<<endl;
    return 0;
}