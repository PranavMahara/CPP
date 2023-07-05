// Write a function char* stuff (char *s1, char* s2, int sp, int rp) 
// to suff string s2 in string s1 at position sp, replacing rp number of 
// characters (rp may be zero).

#include<iostream>
using namespace std;

char *stuff(char *s1, char *s2, int sp, int rp){
    int i = 0;
    while ((rp!=0)&& (s1[sp]!='\0')){
        s1[sp] =s2[i];
        sp++;
        i++;
        rp--;
    }

    return s1;
}

int main(){
    char t1[] = "Helicopter";
    char t2[] = "XYZ";
    char *t3;
    t3 = stuff(t1, t2, 3, 4);
    puts(t3);
    
    return 0;
}