//linked list implementation of queue
#include <iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node *front=NULL;
node *rear=NULL;
void enqueue(int x){
	node *temp=new node();
	temp->data=x;
	temp->next=NULL;
	if(front ==NULL && rear==NULL)
	{front=rear=temp;
	return;}
	else 
	rear->next=temp;
	rear=temp;	
}

void dequeue(){
	node* temp=new node();
	temp=front;
	if(front==NULL)return;
	if(front==rear)front=rear=NULL;
	else
	front=front->next;
	delete temp;
}

int Front()
{
	if(front!=NULL)
	return front->data;
	else 
	return -1;
}

void print()
{
	node *temp=front;
	while(temp!=NULL)
	{cout<<temp->data;
	temp=temp->next;}
	cout<<endl;
	
}
int main()
{
	enqueue(2);
	print();
	enqueue(4);
	print();
	enqueue(6);
	print();
	dequeue();
	print();
	cout<<Front();
}
