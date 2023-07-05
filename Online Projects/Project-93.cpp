//  Write a C++ program to replace a given number until it become 1.

#include <iostream>
#include <cmath>

using namespace std;
  
    int num_replace(int n){
        if(n==1){
            return 0;
        }
        
        if(n%2==0){
            return num_replace(n/2)+1;
        }
        else{
            return min(num_replace(n+1), num_replace(n-1))+1;
        }
    }    

int main(){
    int n = 8; 
    cout << "Original number: "<< n << "  Number of replacements: " <<  num_replace(n) << endl;      
    n = 10; 
    cout << "Original number: "<< n << "  Number of replacements: " <<  num_replace(n) << endl;      
    n = 12; 
    cout << "Original number: "<< n << "  Number of replacements: " <<  num_replace(n) << endl;      
    
	return 0;    
}