#include<iostream>
using namespace std;

class SonDaughter;

class father{
    int income1, income2;

    public:
        void SetData(int i1, int i2){
            income1 = i1;
            income2 = i2;
        }

        void display(){
            cout<<"Father income 1 --> "<<income1<<endl;
            cout<<"Father income 2 --> "<<income2<<endl;
        }

        friend class SonDaughter;
};

class SonDaughter{
    int PocketMoney;

    public:
        void SetData(int i){
            PocketMoney = i;
        }

        int SonDaug(father f){
            return f.income1+f.income2;
        }

        void show(){
            father fp;
            fp.SetData(300, 1000);
            fp.display();
            cout<<"Son/Daughter PocketMoney --> "<<PocketMoney<<endl;
            cout<<"Amount left with papa/mummy is "<<SonDaug(fp)-PocketMoney<<endl;
        }
};

int main(){
    father f;
    SonDaughter sd;

    f.SetData(500, 1000);
    sd.SetData(500);

    f.display();
    cout<<"------------------------------------"<<endl;
    cout<<"The total income of father is "<<sd.SonDaug(f)<<endl;
    cout<<"------------------------------------"<<endl;
    sd.show();
    return 0;
}