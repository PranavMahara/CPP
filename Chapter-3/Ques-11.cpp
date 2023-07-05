#include<iostream>
using namespace std;

const int m = 50; 
class items{
    int item_code[m];
    float item_price[m];
    int count; 

    public:
        void cnt() { count = 0;}
        void get_item();
        void display_sum();
        void remove();
        void display_item();
};

void items :: get_item (){
    cout<<"Enter itemcode: "; 
    cin>>item_code[count]; 
    cout<<"Enter item cost: "; 
    cin>>item_price[count]; 
    count++ ;
}

void items :: display_sum(){
    float sum=0;

    for(int i=0; i<count; i++){ 
        sum = sum + item_price[i];
    }
    cout<< "Total value: "<<sum<<endl;
}

int main(){
    items order;
    order.cnt(); 
    int x;
    do{ 
        cout<<"\nyou can do the following:"; 
        cout<<"enter appropriate no:"; 
        cout<<endl<<" 1 :add an item"; 
        cout<<endl<<"2: display total value :"; 
        cout<<endl<<"3 : display an item"; 
        cout<<endl<<"4 :display all item:"; 
        cout<<endl<<"5 : quit:"; 
        cout<<endl<<endl<<"What is your option: "; 
        cin>>x;

        switch(x){
            case 1: order.get_item(); break;
            case 2: order.display_sum(); break;
            case 3: order.remove(); break;
            case 4: order.display_item();break;
            case 5: break;
            default : cout<<"Error in input; try again";
        } 
    }while(x!=5);
}