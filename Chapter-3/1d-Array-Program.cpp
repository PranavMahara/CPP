#include<iostream>
using namespace std;

class Students{
    private:
        int marks[5];

    public:
        int roll;
        void Marks(){
            for(int i=0; i<5; i++){
                cout<<"Enter the marks of subject "<<i+1<<" for roll number "<<roll<<" --> ";
                cin>>marks[i];
            }
        }
        
        void Display(){
            for(int i=0; i<5; i++){
                cout<<"Marks for subject "<<i+1<<" is "<<marks[i]<<endl;
            }
        }
        void Average(){
            int sum = 0;
            for(int i=0; i<5; i++){
                sum = sum + marks[i];
            }
            cout<<"Average --> "<<sum/5.0<<endl;
        }

        void See(int a){
            cout<<"Marks are --> "<<marks[a-1];
        }
};

int main(){
    Students s;
    cout<<"Enter the roll number --> ";
    cin>>s.roll;

    s.Marks();
    // stu.marks[4] = 56;  // wont work as marks are private
    // cout<<stu.marks[3];
    s.Display();
    s.Average();

    
    int k;
    cout<<"Enter anything between 1 and 5: ";
    cin>>k;

    s.See(k);

    return 0;
}