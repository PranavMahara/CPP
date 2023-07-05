#include<iostream>
using namespace std;

class List{
    private:
        int a[5];
        int last;
    
    public:
        List(){
            last = -1;
        }
        void InsertEnd(int x);
        void InsertBetween(int data,int pos);
        void DeleteData(int pos);
        void Display();
};

void List::InsertEnd(int x){
    a[last+1]=x;
    last++;
}

void List::InsertBetween(int data,int position){
    for(int i=last; i>=position; i--){
        a[i+1]=a[i];
    }
    a[position]=data;
    last++;
}

void List::DeleteData(int position){
    for(int i=position;i<last;i++){
        a[i]=a[i+1];
    }
    last--;

}

void List::Display(){
    cout<<"Elements in the list are: "<<endl;
    for(int i=0;i<=last;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    List l1;
    l1.InsertEnd(1);
    l1.InsertEnd(2);
    l1.InsertEnd(3);
    l1.InsertEnd(4);
    l1.InsertEnd(5);

    l1.DeleteData(2);
    l1.InsertBetween(7,2);

    l1.Display();
    
    return 0;
}
