#include<iostream>
using namespace std;

class check{
    int bop;
    // int bop = 8;  // This is acceptable

    public:
        bop = 8;            // AESA NAHI KAR SAKTE
        
        /*  This is acceptable
        void val(){
            bop = 8;
        }
        */
};

int main(){
    
    return 0;
}