#include <iostream>
using namespace std;

#define size 5
class vector{
    int v[size];

    public:
        vector();
        friend vector operator*(int a, vector b);
        friend vector operator*(vector b, int a);
        friend istream &operator>>(istream &, vector &);
        friend ostream &operator<<(ostream &, vector &);
};

vector :: vector(){
    for (int i = 0; i < size; i++){
        v[i] = 0;
    }
}

vector :: vector(int *x){
    for (int i = 0; i < size; i++){
        v[i] = x[i];
    }
}

vector operator*(int a, vector b){
    vector c;
    for (int i = 0; i < size; i++){
        c.v[i] = a * b.v[i];
    }
    return c;
}

vector operator*(vector b, int a){
    vector c;
    for (int i = 0; i < size; i++){
        c.v[i] = a * b.v[i];
    }
    return c;
}

istream &operator>>(istream &din, vector &b){
    for (int i = 0; i < size; i++){
        din >> b.v[i];
    }
}

ostream &operator<<(ostream &dout, vector &b){
    for (int i = 0; i < size; i++){
        dout << a[i];
    }
    return dout;
}

int x[size] = {2, 4, 6};

int main(){
    vector m;
    vector n = x;
    cout <<"Enter elements of vector m";
    cin >> m;
    cout << m;
    vector p, q;
    p = 2 * m;
    q = n * 2;
    cout << p;
    cout << q;

    return 0;
}