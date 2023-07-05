// Write a program in C++ to check whether a number is a Strong Number or not.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
        int num, nu, remainder, n = 0;
        float result = 0.0;

        cout<<"Enter n: ";
        cin>>num;

        nu = num;

        for (nu = num; nu != 0; ++n){
            nu /= 10;
        }

        for (nu = num; nu != 0; nu /= 10){
            remainder = nu % 10;
            result += pow(remainder, n);
        }


        if ((int)result == num){
                cout<<num<<" is Armstrong";
        }

        else{
                cout<<num<<" is not Armstrong";
        }

    return 0;
}