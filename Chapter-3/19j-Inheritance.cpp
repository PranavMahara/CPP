#include <iostream>
using namespace std;

class employee{
    private:
        string name;
        int number; 
    public:
        void getdata(){
            cout << "Enter last name: "; 
            cin >> name;
            cout << "Enter number: "; 
            cin >> number;
        }

        void putdata() const{
            cout<<"Name: " << name;
            cout<<"Number: " << number;
        }
};

class manager : public employee{
    private:
        string title; 
        double dues; 

    public:
        void getdata(){
            employee::getdata();
            cout << "Enter title: "; 
            cin >> title;
            cout << "Enter golf club dues: "; 
            cin >> dues;
        }

        void putdata() const{
            employee :: putdata();
            cout << "Title: " << title;
            cout << "Golf club dues: " << dues;
        }
};

class scientist : public employee{
    private:
        int pubs; 

    public:
        void getdata(){
            employee::getdata();
            cout << " Enter number of pubs: "; cin >> pubs;
        }
        
        void putdata() const{
            employee::putdata();
            cout << "Number of publications: " << pubs<<endl;
        }
};

class laborer : public employee{

};

int main(){
    manager m1, m2;
    scientist s1;
    laborer l1;

    cout << "Enter data for Manager 1"<<endl;
    m1.getdata();
    cout << "Enter data for Manager 2"<<endl;
    m2.getdata();
    cout << "Enter data for Scientist 1"<<endl;
    s1.getdata();
    cout << "Enter data for Laborer 1"<<endl;
    l1.getdata();
    
    cout << "Data on Manager 1"<<endl;
    m1.putdata();
    cout << "Data on Manager 2"<<endl;
    m2.putdata();
    cout << "Data on Scientist 1"<<endl;
    s1.putdata();
    cout << "Data on Laborer 1"<<endl;
    l1.putdata();
    cout << endl;

    return 0;
}