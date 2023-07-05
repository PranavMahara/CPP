// Sum of n odd number using friend classes
#include<iostream>
using namespace std;

class num{
	int p = 0;

	public:
		friend class odd;
};

class odd
{
	public:
		void disp(num a){
		int n;
		cout<<"Please enter the value to print the odd Number."<<endl;
			cin>>n;
			cout<<"The output is."<<endl;
			for(int i=1;i<=n;i++)
			{
				cout<<2*i-1<<" ";
				a.p=a.p+(2*i-1);
				cout<<endl;
			}
			cout<<"The sum of the given input is: "<<a.p;
}
};
int main()
{
odd m;
num a;
m.disp(a);
return 0;	
}