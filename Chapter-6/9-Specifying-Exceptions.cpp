// Specification of exception restrict functions to throw some specified exceptions only with the use of throw(exception list) in the the header of the function.

#include <iostream>
using namespace std;

void test(int x) throw(int, float, char){
    switch (x){
        case 1:
            throw x;
            break;
        case 2:
            throw 'x';
            break;
        case 3:
            throw double(x);
            break;
        case 4:
            throw float(x);
            break;
    }
}

int main(){
    try{
        test(4);
    }
    catch (int i){
        cout << "Caught int type exception"<<endl;
    }
    catch (float f){
        cout << "Caught float type exception"<<endl;
    }
    catch (char c){
        cout << "Caught char type exception"<<endl;
    }
    catch (double i){
        cout << "Caught Double type exception"<<endl;
    }

    return 0;
}