#include <iostream>
using namespace std;
struct node{              //creating a node
	int data;
	node* link;
	};
	node* head;
void insert(int x){
	node* temp=new node();
	temp->data=x;
	temp->link=NULL;
	if(head!=NULL) temp->link=head;   //a kind of swap
	head=temp;
	}
void print(){
	node* temp=head;
	while(temp!=NULL)
	{   
	    printf("%d",temp->data);
		temp=temp->link;
	}
}
int main(){
	int n,x;
	head=NULL;
    printf("enter the length of the list");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	printf("enter the number \n");
		scanf("%d",&x);
		insert(x);
		print();
		cout<<endl;
	}
	
}
