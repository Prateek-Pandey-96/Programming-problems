#include <iostream>
using namespace std;

struct node{
	int data;
	node* link;
};

node* head;  //global variable

void insert(int data)     //function for creating a list 
{
	node* temp=new node();
	temp->data=data;
	temp->link=head;
	head=temp;
}

void print()
{
	node* temp=head;
	while(temp!=NULL)
	{   cout<<temp->data;
		temp=temp->link;
	}
}

void reversal()
{
	node *temp,*prev,*next;
	temp=head;
	prev=NULL;
	while(temp!=NULL)
	{
		next=temp->link;
		temp->link=prev;
		prev=temp;
		temp=next;
	}
	head=prev;	
}

int main(){
	head=NULL;
	int data;
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	print();
	cout<<endl;
	reversal();
	print();
}


