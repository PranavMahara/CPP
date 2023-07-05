#include <iostream>
#include <cstring>
using namespace std;

class strCount{
    private:
        int count;
        char *str;
        friend class String;

        strCount(char *s){
            int length = strlen(s);
            str = new char[length + 1];
            strcpy(str, s);
            count = 1;
        }

        ~strCount(){
            delete[] str;
        }
};

class String{
    private:
        strCount *psc;

    public:
        String(){
            psc = new strCount("NULL");
        }

        String(char *s){
            psc = new strCount(s);
        }

        String(String &S){
            cout << "\nCOPY CONSTRUCTOR";
            psc = S.psc;
            (psc->count)++;
        }

        ~String(){
            if (psc->count == 1)
                delete psc;
            else
                (psc->count)--;
        }

        void display(){
            cout << psc->str;
            cout << " (addr =" << psc << ")";
        }

        String &operator=(String &S){
            cout << "\nASSIGNMENT";
            if (psc->count == 1)
                delete psc;
            else
                (psc->count)--;
            psc = S.psc;
            (psc->count)++;

            return *this;
        }
};

int main(){
    String s3 = "When the fox preaches, look to your geese.";
    cout << "S3 = ";
    s3.display();
    cout<<endl;

    String s1, s2;
    s1 = s2 = s3;
    cout << "S1 = ";
    s1.display();
    cout<<endl;

    cout << "S2 = ";
    s2.display();
    
    return 0;
}