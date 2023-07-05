#include <iostream>
using namespace std;

class Counter{
    private:
        int count; 

    public:
        Counter() : count(0){}

        int get_count(){
            return count;
        }

        Counter operator++(){
            count++;            
            Counter temp;       
            temp.count = count; 
            return temp;
        }

        // Counter operator ++ (){   // Other way to return
        //     ++count; 
        //     return Counter(count); 
        // } 
};

int main(){
    Counter c1, c2;                     
    cout << "c1 =" << c1.get_count()<<endl; 
    cout << "c2 =" << c2.get_count()<<endl;
    ++c1;                               
    c2 = ++c1;                          
    cout << "c1 =" << c1.get_count()<<endl; 
    cout << "c2 =" << c2.get_count()<<endl;
    
    return 0;
}

// Here the operator++() function creates a new object of type Counter, called temp, to use as a
// return value. It increments the count data in its own object as before, then creates the new
// temp object and assigns count in the new object the same value as in its own object. Finally, it
// returns the temp object. This has the desired effect.


// The approach is making a copy of originial object and returning the copy and another approach is Virtual
// Functions which is to return the value of original object using this pointer