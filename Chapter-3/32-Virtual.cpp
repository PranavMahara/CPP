// A virtual function cannot be a static member since a virtual member is always a member of a 
// particular object in a class rather than a member of the class as a whole.
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

        virtual void display(){}
};

class CWHVideo : public CWH{
    int videolen;

    public:
        CWHVideo(string s, float r, int vl): CWH(s, r){
            videolen = vl;
        }

        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videolen<<" minutes"<<endl;
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

// Rules for Virtual Function

// 1) They cannot be static
// 2) They are accessed by object pointers
// 3) Virtual FUnctions can be a friend of another class
// 4) A virtual function in base class might not be used.
// 5) if a virtual function defined in the base class there is no necessity of redefining it in the derived class