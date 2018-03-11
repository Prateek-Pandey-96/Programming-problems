#include <iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
	};
	
node* getnewnode(int data)
{
	node* newnode=new node();
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;            //return address of the new node
}

node* insert(node* root,int data)
{
	if(root==NULL)
	root=getnewnode(data);
	else if(data<=root->data)
	root->left=insert(root->left,data);
	else
	root->right=insert(root->right,data);
	return root;
}
bool search(node* root,int data)
{
	if(root==NULL)return false;
	else if(root->data=data)return true;
	else if(root->data>data)search(root->right,data);
	else search(root->left,data);
}
int main()
{
	node* root=NULL;
	root=insert(root,3);
	root=insert(root,4);
	root=insert(root,5);
	search()
	return 0;
}
