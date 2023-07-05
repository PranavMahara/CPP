#include<iostream>
using namespace std;

struct records {
    char name[20];
    int roll;
    int marks[5];
    char gender;
};

void printRecords( struct records *ptr){
    cout<<"Name --> "<<ptr->name<<endl;
    cout<<"Roll --> "<<ptr->roll<<endl;
    cout<<"Gender --> "<<ptr->gender<<endl;
    
    for( int i = 0; i < 5; i++){
        cout<<"Marks in subject "<<i+1<<" --> "<<ptr->marks[i]<<endl;
    }
}

int main(){
    struct records students = {"Alex", 43, {76, 98, 68, 87, 93}, 'M'};
    printRecords(&students);
    return 0;
}