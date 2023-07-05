#include<iostream>
#include<conio.h>
using namespace std;

class father{
    int Age ;
    string name;

    public:
        void Get(){
            cout << "Your father name please";
            cin >> name;
            cout << "Enter the age";
            cin >> Age;
        }
        void Show(){
            cout<< "In my father's name is: " <<name<< "In my father's age is: "<<Age;
        }
};

class mother{
    string name;
    int age ;
    
    public:
        void get ( ){
            cout << "Mother's name please" << "In"; 
            cin >> name;
            cout << "Mother's age please" << "in"; 
            cin >> age;
        }

        void show (){
            cout << "In my mother's name is: " <<name;
            cout << "In my mother's age is: " <<age;
        }
};

class daughter : public father, public mother{ 
    string name ; //the features of both the base class
    int std;
    public:
        void Get(){
            father :: Get ( ) ;
            mother :: get ( ) ;
            cout << "Child's name: ";
            cin >> name;
            cout << "Child's standard";
            cin >> std;
        }
        void Show(){
            father :: Show ( );
            father :: Show ( ) ;
            cout << "In child's name is : " <<name;
            cout << "In child's standard: " << std;
        }
};

int main ( ){

    daughter d1;
    d1.Get ( ) ;
    d1.Show ( ) ;

    return 0;
}
