// Write a C++ program to count frequency of each element of integer array and float array using class template inheritance. 
// Create a Base template BC class with a function to get the array input. 
// Create a derived template class DC for the base class BC with a function to count frequency of each element of the array and display it. 
// For example if the integer  array size is 10 and the elements in array are 5,10,2,5,50,5,10,1,2, 2 then the frequency of all elements of array  are 5-3, 10-3, 2-3, 50-1,1-1 similarly for float array

// Input the integer array size (N)
// Input the elements of the integer array (a[1], a[2],….a[N])
// Input the float array size (N)
// Input the elements of the float array (a[1], a[2],….a[N])
// Output

// Print the frequency of elements in the integer array

// Element1-frequncy of element1

// Element2-frequency of element2

// Print the frequency of elements in the float array

// Element1-frequncy of element1

// Element2-frequency of element2
// Answer:(penalty regime: 0 %)
// Ace editor not ready. Perhaps reload page?
// Falling back to raw text area.

#include<iostream>
using namespace std;

class BC{
    public:
        BC(){}
        int n;
        int arr[n];

        void inp(){
            cout<<"Enter the number of elements in the array --> ";
            cin>>n;

            for(int i=0; i<n; i++){
                cout<<"Enter element "<<i+1<<" --> ";
                cin>>arr[i];
            }
        }
};

class DC : public BC{
    public:
        int freq[n];
        
        DC(){
            for(int i=0; i<n; i++){
                freq[i] = -1;
            }
        }

        void frequ(){
            for(int i=0; i<n; i++){
                int count = 1;
                for(int j=i+1; j<n; j++){
                    if(arr[i]==arr[j]){
                        count++;
                        freq[j] = 0;
                    }
                }

                if(freq[i]!=0){
                    freq[i] = count;
                }
            }
        }

        void show(){
            for(int i=0; i<n; i++){
                if(freq[i]!=0){
                    cout<<arr[i]<<" occurs "<<freq[i]<<" number of times"<<endl;
                }
            }
        }
};


int main(){
    
    DC obj1;
    obj1.inp();
    obj1.frequ();
    obj1.show();
    return 0;
}