// Write a C++ program to swap first and last digits of any number.

// Input any number: 12345
// The number after swapping the first and last digits are: 52341

#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int num, last, first, temp, swap, count = 0;
 
    cout<<"Enter any number: ";
    cin>>num;
 
    temp = num;
    last = temp % 10;
    count = (int)log10(temp);
 
    while(temp>=10){
        temp /= 10;
    }
    first = temp;
    swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));
  
    cout<<num<<" is swapped to "<<swap;
 
    return 0;
}

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int count = (int)log10(n)+1;
//     int arr[count];
//     for(int i=count-1; i>=0; i--){
//         arr[i] = n%10;
//         n=n/10;
//     }

//     cout<<arr[count-1];
//     for(int i=1; i<count-1; i++){
//         cout<<arr[i];
//     }
//     cout<<arr[0];
    
//     return 0;
// }