#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        void getdist(){
            cout << "\n Enter feet: ";
            cin >> feet;
            cout << " Enter inches: ";
            cin >> inches;
        }
        void showdist() const{
            cout << feet << " " << inches << " ";
        }
};

int main(){
    Distance dist[100];
    int n = 0;
    char ans;

    cout << endl;
    do{
        cout << "Enter distance number " << n + 1;
        dist[n++].getdist();
        cout << "Enter another (y/n)?: ";
        cin >> ans;
    } while (ans != 'n');

    for (int j = 0; j < n; j++){
        cout << "\nDistance number " << j + 1 << " is ";
        dist[j].showdist();
    }
    cout << endl;
    return 0;
}
/*
There is no bounds-checking in C++ arrays. If the program inserts something beyond the
end of the array, neither the compiler nor the runtime system will object. However, the renegade
data will probably be written on top of other data or the program code itself. This may cause
bizarre effects or crash the system completely.
The moral is that it is up to the programmer to deal with the array bounds-checking. If it seems
possible that the user will insert too much data for an array to hold, the array should be made
larger or some means of warning the user should be devised. For example, you could insert the
following code at the beginning of the do loop in ENGLARAY:
if( n >= MAX )
{
cout << “\nThe array is full!!!”;
break;
}
This causes a break out of the loop and prevents the array from overflowing.
*/