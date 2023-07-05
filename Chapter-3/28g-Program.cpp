// Creating array of objects using pointer

#include<iostream>
using namespace std;

class item{
    int code;
    float price;

    public:
        void getdata(int a, float b){
            code=a;
            price=b;
        }

        void show(){
            cout<<code<<" "<<price<<endl;
        }
};

int main(){
    int n;
    int cd;
    float pri;
    cout<<"Enter number of objects to be created --> ";
    cin>>n;

    item *ptr = new item[n];
    item *p = ptr;

    for(int i=0;i<n;i++){
        cout<<"Enter data for object"<<i+1<<endl;
        cout<<"Enter Code: ";
        cin>>cd;
        cout<<"Enter price: ";
        cin>>pri;
        p->getdata(cd,pri);
        p++;
    }

    p=ptr;
    cout<<"Data in various objects are "<<endl;
    cout<<"S.no\tCode\tPrice\n";

    for(int i=0; i<n; i++){
        cout<<i+1<<"\t";
        ptr->show();
        ptr++;
    }
    
    return 0;
}
