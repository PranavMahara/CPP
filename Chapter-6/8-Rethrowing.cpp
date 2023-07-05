// It is possible to pass exception caught by a catch block again to another exception handler. This is known as Re-throwing.

#include <iostream>
using namespace std;

void MyHandler(){
    try{
        throw "hello";
    }

    catch (const char *){
        cout << "Caught exception inside MyHandler\n";
        throw; // rethrow char* out of function
    }
}

int main(){
    cout << "Main start...." << endl;
    try{
        MyHandler();
    }
    catch (const char *){
        cout << "Caught exception inside Main\n";
    }
    cout << "Main end";
    return 0;
}
