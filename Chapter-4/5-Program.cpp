// Based on a file data.txt, write a program that writes and reads the file and outputs its
// content with a program that  (name, id, quiz1, quiz2, quiz3, exam).
// Allow the user to view the data in chunks, asking in order to see the next chunk
// At the end print a characteristic table showing the average, lowest and highest score
// on each quiz and exam

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string name, id;
    int quiz1, quiz2, quiz3, exam;

    cout<<"Enter your name --> ";
    cin>>name;

    cout<<"Enter ID --> ";
    cin>>id;

    cout<<"Enter your marks for quiz1, quiz2, quiz3, exam --> ";
    cin>>quiz1>>quiz2>>quiz3>>exam;

    ofstream out("Data.txt");
    


    return 0;
}