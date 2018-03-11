#include <iostream>
using namespace std;
struct node{
	int data;
	node* link;
	};
	
	node* head; //global variable
//function for insering the node	
void insert(int data){
//inserting at the end
   	node* temp=new node();
   	temp->data=data;
   	temp->link=head;
   	head=temp;   	
}

//function for printing the series
void print(){
	node* temp=head;
	while(temp!=NULL)
	{	cout<<temp->data;
		temp=temp->link;
	}
	cout<<endl;
}
//fnunction for deleting a particular node
void Delete(int n){
	node* temp1=head;
	if(n==1)
{
	head=temp1->link;
	delete temp1;
	return;}
	else
	{
	node* temp2;
	for(int i=0;i<n-2;i++){
		temp1=temp1->link;//points to (n-1)th node
		temp2=temp1->link;//points to nth node
		temp1->link=temp2->link;
		delete temp2;
		return;
    }
	}
}
	int main()
	{
		head=NULL;
		int n;
		insert(2);
		insert(4);
		insert(6);
		insert(8);
		insert(1);
		print();
		cout<<"enter position to be deleted";
		cin>>n;
		Delete(n);
		print();
		return 0;
	}

