// Write a program in C++ to print the area of a polygon.

#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    float ar,s,n;

	cout<< "Input the number of sides of the polygon: ";
	cin>>n;
	cout<<"Input the length of each side of the polygon: ";
	cin>>s;	
	ar= (n * (s * s)) / (4.0 * tan((M_PI / n)));
	cout<<"The area of the ploygon is: "<<ar<<endl;

}