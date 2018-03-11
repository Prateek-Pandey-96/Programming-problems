//job sequencing(greedy algorithm)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Job
{
	char a;
	int deadline;
	int profit; 
};

bool compare(Job j1,Job j2)
{
	return (j1.profit>=j2.profit);
}

void max_profit(Job arr[],int n)
{
	sort(arr,arr+n,compare);
	int result[n];
	bool status[n];
	for(int i=0;i<n;i++)
	{
		status[i]=false;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=min(n,arr[i].deadline)-1;j>=0;j--)
		{
			if(status[j]==false)
		{	result[j]=i;
			status[j]=true;
			break;
		}
		}
	}
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i].deadline>t)t=arr[i].deadline;
	}
	for(int i=0;i<t;i++)
	{
		cout<<arr[result[i]].a<<endl;
	}
	
}

int main()
{
	Job arr[]={{'A',2,100},{'B',4,19},{'C',2,27},{'D',1,25},{'E',3,15}};
	int n=sizeof(arr)/sizeof(arr[0]);
	max_profit(arr,n);
}
