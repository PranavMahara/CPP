// Write a program in C++ to check a number is a Happy or not.

#include<iostream>
using namespace std;

int isHappyNumber(int num){  
    int rem = 0, sum = 0;  
      
    //Calculates the sum of squares of digits  
    while(num > 0){  
        rem = num%10;  
        sum = sum + (rem*rem);  
        num = num/10;  
    }  
    return sum;  
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
      
    int result = num;  
      
    while(result != 1 && result != 4){  
        result = isHappyNumber(result);  
    }  
      
    //Happy number always ends with 1  
    if(result == 1)  
        cout<<num<<" is happy number"; 
    //Unhappy number ends in a cycle of repeating numbers which contains 4  
    else if(result == 4)  
        cout<<num<<" is not happy number"; 
    return 0;
}
   