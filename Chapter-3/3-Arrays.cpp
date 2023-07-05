#include<iostream>
using namespace std;

class ShopItem{
    int itemID[100];
    int itemPrice[100];
    int counter;

    public:
        void initCounter(){
            counter = 0;
        }
        void setPrice();
        void displayPrice();
};

void ShopItem :: setPrice(){
    cout<<"Enter ID Number of your item number "<<counter+1<<" --> ";
    cin>>itemID[counter];
    cout<<"Enter the price of the item --> ";
    cin>>itemPrice[counter];
    counter++;
}

void ShopItem :: displayPrice(){
    for(int i=0; i<counter; i++){
        cout<<"The price of item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    ShopItem dk;
    dk.initCounter();

    int num;
    cout<<"Enter the number of items --> ";
    cin>>num;

    for(int i=0; i<num; i++){
        dk.setPrice();
    }
    dk.displayPrice();
    return 0;
}