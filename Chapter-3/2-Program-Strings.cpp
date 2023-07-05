#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;    // by default in class members are private

    public:
        void read();    
        void checkbi();
        void ones();
        void display();
};
void binary :: read(){
    cout<<"Enter a binary number --> ";
    cin>>s;
}

void binary :: checkbi(){
    for(int i=0; i<s.size(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){   // s.at    'at' is a string function
            cout<<"Incorrect Binary"<<endl;  // instead of s.at(i) you can use s[i]
            exit(0); // break karoge toh baaki chalenge // exit karoge toh sab end
        }
    }
    ones();    // this is nesting of loops 
    display();
}

void binary :: ones(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';  
        }

        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(){
    cout<<"The binary is now --> ";
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
}

int main(){
    binary b;
    b.read();
    b.checkbi(); 
    
    return 0;
}