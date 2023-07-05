// Write a program for String Manipulation with function

#include<iostream>
using namespace std;

string rev_string(string s){
    for(int i=0; i<s.size()/2; i++){
        char temp = s[i];
        s[i] = s[s.size()-i-1];
        s[s.size()-i-1] = temp;
    }

    return s;
}

int main(){
    string str;
    cout<<"Enter the string --> ";
    cin>>str;


    cout<<"The reverse of string is "<<rev_string(str);

    return 0;
}
// #include<iostream>
// using namespace std;

// void reverse_string(string s, int length){
//     for(int i=length-1; i>=0; i--){
//         cout<<s[i];
//     }
//     cout<<endl;
// }

// int main(){
//     string str;
//     cout<<"Enter the string --> ";
//     cin>>str;

//     int len = str.size();
//     cout<<"Length of string is "<<len<<endl;
//     reverse_string(str, len);

//     return 0;
// }