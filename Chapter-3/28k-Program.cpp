#include<iostream>
using namespace std;

class M{
    int x; 
    int y; 
    public:
        void set_xy(int a,int b){ 
            x = a; 
            y = b;
        }

        friend int sum(M);
};

int sum (M m){
    int M :: *px = &M :: x; //pointer to member x
    int M :: *py = &M :: y;//pointer to y
    M *pm = &m;
    int s = m.*px + pm->y;
    return s;
}
int main (){
    M m;
    void(M::*pf)(int, int)= &M :: set_xy;//pointer to function set-xy (n*pf)( 10,20); 
    //invokes set-xy 
    cout<<"sum=:"<<sum(m); 
    *op = &n; //point to object n 
    ( op->* pf)(30,40); // invokes set-xy 
    cout<<"Sum = "<<sum(n)<<endl; 
    return 0;
}