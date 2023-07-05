#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;

    public:
        void SetData(int a, float b){
            id = a;
            price = b;
        }

        void getData(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){
    ShopItem *ptr = new ShopItem[3];  // 3 is size
    ShopItem *ptrTemp = ptr; // Re-Initialize the pointer when the first for loop ends
    
    int p;
    float q;
    for(int i=0; i<3; i++){
        cout<<"Enter ID and price of item "<<i+1<<" ";
        cin>>p>>q;
        (*ptr).SetData(p, q); // or ptr->SetData(p, q);
        ptr++;
    }

    for(int i=0; i<3; i++){
        cout<<"Item Number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}