// Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. 
// Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    int sum = 0;
    for(int i=1;i<=n; i++){
        cout<<pow(10, i)-1<<" ";
        sum = sum + pow(10, i)-1;
    }

    cout<<"The sum is "<<sum;
    return 0;
}