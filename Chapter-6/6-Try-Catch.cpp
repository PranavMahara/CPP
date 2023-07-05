// When an exception is thrown, the exception handler are searched in order fore an appropriate 
// match.
// • It is possible that arguments of several catch statements match the type of an exception. In 
// such cases the first handler that matches the exception type is executed

#include<iostream>
using namespace std;

void test(int x){
    try{
        if(x==1) {throw x;}

        else if(x==0) {throw 'x';}

        else if(x==-1) {throw 1.0;}

        cout<<"End of Try Block"<<endl;
    }

    catch(char c){
        cout<<"Caught a Character"<<endl;
    }
    catch(int m){
        cout<<"Caught an Integer"<<endl;
    }
    catch(double d){
        cout<<"Caught a Double"<<endl;
    }
    
}

int main(){
    test(1);
    test(0);
    test(-1);
    test(2);
    
    return 0;
}
