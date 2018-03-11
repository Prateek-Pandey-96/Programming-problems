#include <iostream>
using namespace std;
struct node{
	int data;
	node* link;
};
node* head=NULL;

void insert(int x)
{
	node* temp=new node();
	temp->data=x;
	temp->link=head;
	head=temp;
}

void print(){
	node* temp1=head;
	while(temp1!=NULL)
	{
		cout<<temp1->data;
		temp1=temp1->link;
	}
	
}



int main()
{	int n;	
	cout<<"enter number of values";
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		insert(x);
		print();
	}
	
}


