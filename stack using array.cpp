#include <iostream>
using namespace std;
#define MAX_SIZE 101
//global declarations
int A[MAX_SIZE];
int top=-1;
void Push(int x)
{
	if(top==MAX_SIZE-1)
	{cout<<"push operation is not possible";
	return;}
	else
	A[++top]=x;
}
void Pop()
{
	top--;
}
int Top()
{
	return A[top];
}
void print()
{
	for(int i=0;i<=top;i++)cout<<A[i]<<" ";
}
int main()
{
	Push(2);print();
	cout<<endl;
	Push(5);print();
	cout<<endl;
	Push(10);print();
	cout<<endl;
	Pop();print();
	cout<<endl;
	cout<<Top();
	cout<<endl;
	Push(15);print();
	return 0;
}
