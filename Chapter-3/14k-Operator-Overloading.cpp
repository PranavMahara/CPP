// Overloading Binary Operators

// Arithmetic Operators

#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        Distance() : feet(0), inches(0.0){}

        Distance(int ft, float in) : feet(ft), inches(in){}

        void GetDist(){
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }

        void showdist() {
            cout << feet << " " << inches << ' ';
        }

        Distance operator+(Distance d2){
            int f = feet + d2.feet;
            float i = inches + d2.inches;
            if (i >= 12.0){
                i -= 12.0;
                f++;
            }

            return Distance(f, i);
        }
};

int main(){
    Distance dist1, dist3, dist4;
    dist1.GetDist();
    Distance dist2(11, 6.25);
    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;

    cout << "dist1 = ";
    dist1.showdist();
    cout << endl;
    cout << "dist2 = ";
    dist2.showdist();
    cout << endl;
    cout << "dist3 = ";
    dist3.showdist();
    cout << endl;
    cout << "dist4 = ";
    dist4.showdist();
    cout << endl;

    return 0;
}
// it’s important to understand how the return value and arguments of the operator relate to the
// objects. When the compiler sees this expression it looks at the argument types, and finding
// only type Distance, it realizes it must use the Distance member function operator+()

// The argument on the left side of the operator (dist1 in this case) is the object
// of which the operator is a member. The object on the right side of the operator (dist2) must
// be furnished as an argument to the operator. The operator returns a value, which can be assigned
// or used in other ways; in this case it is assigned to dist3. 

// We can generalize and say that an overloaded operator always requires one less argument than
// its number of operands, since one operand is the object of which the operator is a member.
// That’s why unary operators require no arguments.