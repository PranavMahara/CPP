// Passing Structures by Reference

#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

void scale( Distance& dd, float factor){
    float inches = (dd.feet*12 + dd.inches) * factor;
    dd.feet = static_cast<int>(inches / 12);
    dd.inches = inches - dd.feet * 12;
}

void engldisp( Distance dd ){
    cout << dd.feet <<"-" << dd.inches << " ";
}

int main(){
    Distance d1 = { 12, 6.5 }; 
    Distance d2 = { 10, 5.5 };
    cout << "d1 = "; 
    engldisp(d1); 
    cout<<endl;
    
    cout << "d2 = "; 
    engldisp(d2);
    cout<<endl;
    
    scale(d1, 0.5); 
    scale(d2, 0.25);
    cout << "\nd1 = "; engldisp(d1); 
    cout << "\nd2 = "; engldisp(d2);
    cout << endl;

    return 0;
}



// Here are the two calls to the function scale():
// scale(d1, 0.5);
// scale(d2, 0.25);
// The first call causes d1 to be multiplied by 0.5 and the second causes d2 to be multiplied by
// 0.25. Notice that these changes take place directly to d1 and d2. The function doesn’t return
// anything; the operation is performed directly on the Distance argument, which is passed by
// reference to scale(). (Since only one value is changed in the calling program, you could
// rewrite the function to pass the argument by value and return the scaled value. Calling such a
// function would look like this:
// d1 = scale(d1, 0.5);
// However, this is unnecessarily verbose.)