#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
}*top=NULL;

void push(int d){
	node *q=new node;
	//node q;
	q->data=d;
	q->next=top;
	top=q;
}
void pop(){
	int temp;
	node *q;
	q=top;
	temp=q->data;
	top=top->next;
	delete q;
	cout<<temp<<endl;
}
void display(){
	node *q;
	for(q=top;q!=NULL;q=q->next)
	cout<<q->data<<"\t";
	cout<<endl;
}
int main(){
	int choice,data;
	do{
		cout<<"Stack Implementation"<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter the data to push"<<endl;
				cin>>data;
				push(data);
				break;
			case 2:
				cout<<"Poped element is";
				pop();
				break;
			case 3:
				cout<<"Element in the list are"<<endl;
				display();
				break;
		}
	}while(1);
}
