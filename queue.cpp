#include <iostream>
using namespace std;
#define MAX_SIZE 101
class queue
{
	private:
		int A[MAX_SIZE];
		int front ,rear;
	public:
		queue()
		{front=-1;
		rear=-1;}
	bool isempty(){
	return (front==-1 && rear==-1);
	}
	bool isfull(){
	return (rear+1)%MAX_SIZE==front ?true:false;
	}
	void enqueue(int x){
		if(isfull())
		{cout<<"full hai bhosdike";
		return;}
		else if(isempty())
		{front=0;
		rear=0;}
		else
		rear=(rear+1)%MAX_SIZE;
		A[rear]=x;
	}
	void dequeue()
	{
		if(isempty())
		{
			cout<<"khali hai bhosdike";
			return;}
		else if(front==rear)
		{
			front=rear=-1;
		}
		else
		front=(front+1)%MAX_SIZE;
		}
		
	void print()
	{
		int count=(rear-front+MAX_SIZE)%MAX_SIZE+1;
		for(int i=0;i<count;i++)
		cout<<A[(front+i)%MAX_SIZE];
		cout<<endl;
		}
		
	}
;	
int main()
{
	queue q;
	q.enqueue(2);q.print();
	q.enqueue(5);q.print();
	q.enqueue(7);q.print();
	q.dequeue();q.print();
	return 0;
	
	}	
	
		
	




