#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }

        virtual void display(){cout<<"Display hai kya usme check karo"<<endl ;}
};

class CWHVideo : public CWH{
    int videolen;

    public:
        CWHVideo(string s, float r, int vl): CWH(s, r){
            videolen = vl;
        }
};

class CWHText : public CWH{
    int words;

    public:
        CWHText(string s, float r, int wc) : CWH(s, r){
            words = wc;
        }

        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Total words in this video are: "<<words<<endl;
        }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    title = "C++ VIDEOS";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo Vid(title, rating, vlen);
    // Vid.display();

    title = "C++ Text";
    words = 433;
    rating = 4.33;
    CWHText Viid(title, rating, words);
    // Viid.display();

    CWH* tuts[2];
    tuts[0] = &Vid;
    tuts[1] = &Viid;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}