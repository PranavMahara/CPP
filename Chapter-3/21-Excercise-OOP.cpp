// 2 Classes

//     1. Simple Calculator --> Takes input of 2 numbers using a utility function and performs + , -, *, / and displays using another function
//     2. Scientific Calculator --> Takes input of 2 numbers using a utility function and performs any four scientfic operation (sin, cos, tan, log) of your choice and displays the results 
//                                 using another function
//     Create class HybridCalculator and inherit these 2 classes

//     Q.1 What type of inheritance?
//     Q.2 Which mode of inheritance?
//     Q.3 Create an object and display results of simple and scientific calculator.
//     Q.4 How is code resuability implenented?

#include<iostream>
#include<cmath>
using namespace std;

class Simple{
    int a;
    int b;
    
    public:
        void inp(int k, int p){
            a = k;
            b = p;
        }

        int inp_a(){
            return a;
        }

        int inp_b(){
            return b;
        }

        
};

class Scientific : public Simple{
        public:
        void display(){
                cout<<"Addition --> "<<inp_a()+inp_b()<<endl;
                cout<<"Subtraction --> "<<inp_a()-inp_b()<<endl;
                cout<<"Multiplication --> "<<inp_a()*inp_b()<<endl;
                cout<<"Division --> "<<(float)inp_a()/inp_b()<<endl;
        }
        void show(){
            cout<<"For first number "<<endl;
            cout<<"log is "<<log(inp_a())<<endl;
            cout<<"cos is "<<cos(inp_a())<<endl;
            cout<<"exp is "<<exp(inp_a())<<endl;
            cout<<"sin is "<<sin(inp_a())<<endl;

            cout<<"For Second number "<<endl;
            cout<<"log is "<<log(inp_b())<<endl;
            cout<<"cos is "<<cos(inp_b())<<endl;
            cout<<"exp is "<<exp(inp_b())<<endl;
            cout<<"sin is "<<sin(inp_b())<<endl;
        }
};

int main(){
    Scientific num;
    int a, b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;

    num.inp(a, b);
    num.display();
    num.show();

    return 0;
}