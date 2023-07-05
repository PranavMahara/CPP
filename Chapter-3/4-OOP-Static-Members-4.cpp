// Static Members become very important if we use arrays
// See next now (4-OOP-Static-Members-5)
#include<iostream>
using namespace std;

class Students{
    int marks;
    int count = 0;
    
    public:
        void setmarks(){
            cout<<"Enter the marks for subject "<<count+1<<"--> ";
            cin>>marks;
            count++;
        }

        void display(){
            cout<<"Marks for subject "<<count<<" --> "<<marks<<endl;
        }
};

int main(){
    Students mark[5];

    for(int i=0; i<5; i++){
        mark[i].setmarks();
        mark[i].display();
    }
    return 0;
}

