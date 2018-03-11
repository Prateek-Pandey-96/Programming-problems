//inserting at the beginning of the list


#include<iostream>
using namespace std;

struct node{
	int data;
	node* link;
};

void print(node* head)
{
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->link;
	}
}

node* insert(node* head,int data)
{
	node* temp=new node();
	temp->data=data;
	temp->link=head;
	head=temp;
	return head;
}

int main(){
	node* head=NULL;  //here head is a local variable unlike all other cases
	head=insert(head,4);
	head=insert(head,3);
	head=insert(head,2);
	head=insert(head,1);
	print(head);	
}
